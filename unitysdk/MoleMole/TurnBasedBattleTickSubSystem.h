#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_B7E341C5F1A6F199;
class Class_4_3E4A3C01978F4EAF;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTurnBasePreviewEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CHECKOCCLUSIONDITHER_OFFSET UNITYSDK_OFFSET(0x197436B0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CREATEPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x197424D0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_DESTROYALLPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x19743270)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19742240)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x19742320)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19743560)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x19742030)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKEFFECT_OFFSET UNITYSDK_OFFSET(0x19742C40)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x19744530)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TRYDESTROYPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x19742A50)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19744BB0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19744D20)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x19744DB0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19744E40)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x19744ED0)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBasedBattleTickSubSystem_TypeDefinitionIndex = 90772;

	class TurnBasedBattleTickSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::TurnBasedBattleTickSubSystem*>
	{
	public:
		// static const ::System::String* DitherTag; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* ditherCharacters; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::System::ValueTuple_3<::System::Int32, ::MoleMole::Config::ConfigTurnBasePreviewEffect*, ::MoleMole::Battle::Entity*>>* previewEffectDic; // 0x18
		::Class_4_3E4A3C01978F4EAF* GameContext; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* occludedBuffer; // 0x28
		::System::Single enemyRoundProtectTimer; // 0x30
		::System::Single protectTimer; // 0x34
		::System::Single enemyRoundProtectTime; // 0x38
		::System::Boolean startEnemyRoundProtect; // 0x3C
		::System::Boolean startSelfRoundProtect; // 0x3D
		::System::Single protectTime; // 0x40
		::System::Single checkDitherTimer; // 0x44
		::System::Single checkInterval; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void CreatePreviewEffect(::MoleMole::TurnBattleEntityUnit* owner, ::System::Int32 skillIdx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CREATEPREVIEWEFFECT_OFFSET))(this, owner, skillIdx);
		}

		::System::Void DestroyAllPreviewEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_DESTROYALLPREVIEWEFFECT_OFFSET))(this);
		}

		::System::Void TryDestroyPreviewEffect(::MoleMole::Battle::Entity* owner, ::System::Int32 skillIdx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TRYDESTROYPREVIEWEFFECT_OFFSET))(this, owner, skillIdx);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKEFFECT_OFFSET))(this);
		}

		::System::Void CheckOcclusionDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CHECKOCCLUSIONDITHER_OFFSET))(this);
		}

		::System::Void TickProtectTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKPROTECTTIME_OFFSET))(this, deltaTime);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
