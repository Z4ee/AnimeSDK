#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_80EEBC98674C45BB_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COOPREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET UNITYSDK_OFFSET(0x183E7910)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_GETCACHEDTARGETBATTLEREGION_OFFSET UNITYSDK_OFFSET(0x183E76F0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x183E7590)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x183E74F0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183E7650)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x183E7230)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x183E75F0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x183E6F70)
#define MOLEMOLE_COOPREGIONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x183E7AB0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x183E7B10)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183E7BA0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x183E7C30)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x183E7CC0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x183E7D50)

namespace MoleMole
{
	inline static constexpr unsigned int CoopRegionSubsystem_TypeDefinitionIndex = 75244;

	class CoopRegionSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CoopRegionSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* TargetBattleRegions; // 0x10
		::MoleMole::EntityHandle CachedTargetBattleRegion; // 0x18
		::System::Int32 CachedFrameIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnBattleRegionEntityRemoved(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET))(this, entity);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetCachedTargetBattleRegion()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_GETCACHEDTARGETBATTLEREGION_OFFSET))(this);
		}

		::System::Boolean CheckBattleRegionTeleportLegal(::Class_3_80EEBC98674C45BB_3* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_80EEBC98674C45BB_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET))(this, component);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
