#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F77B71357054B00.h"
#include "unitysdk/MoleMole/MiniGame/AutoBattle/MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B.h"
#include "unitysdk/MoleMole/MiniGame/AutoBattle/MonoBangBooAutoBattleSlot_Struct_2_1D8CD3DFD1EEB90D.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET UNITYSDK_OFFSET(0x10BC85D0)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_90A3FA24C88925BF_1_OFFSET UNITYSDK_OFFSET(0x10BC8890)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_90A3FA24C88925BF_OFFSET UNITYSDK_OFFSET(0x10BC87B0)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x10BC7980)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_BECD032E88F61273_OFFSET UNITYSDK_OFFSET(0x10BC8800)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET UNITYSDK_OFFSET(0x10BC8190)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET UNITYSDK_OFFSET(0x10BC8570)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET UNITYSDK_OFFSET(0x10BC8510)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET UNITYSDK_OFFSET(0x10BC7880)
#define MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC8710)

namespace MoleMole::MiniGame::AutoBattle
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_TypeDefinitionIndex = 63824;

	class MonoBangBooAutoBattleSlot : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::Enum_3_9F77B71357054B00 SlotType; // 0x28
		::System::Int32 X; // 0x2C
		::System::Int32 Y; // 0x30
		::UnityEngine::Transform* ValidEff; // 0x38
		::UnityEngine::Transform* HighLightEff; // 0x40
		::UnityEngine::Transform* AttackRangeEff; // 0x48
		::UnityEngine::Transform* RecommendEff; // 0x50
		::UnityEngine::Transform* OverrideLimitEff; // 0x58
		::UnityEngine::Transform* NonDragEff; // 0x60
		::UnityEngine::Transform* FullEff; // 0x68
		::System::Boolean Field_7_10; // 0x70
		::System::Boolean Field_7_11; // 0x71
		::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B Field_7_12; // 0x74
		::MoleMole::MonoGamepadSelectable* Field_7_13; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Struct_2_1D8CD3DFD1EEB90D>* Field_7_14; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET))(this);
		}

		::System::Void SetEff(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET))(this, a1);
		}

		::System::Void SetValidColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetIsOverLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot*>* GetAll()
		{
			return ((::Il2CppArray<::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET))();
		}

		static ::System::Boolean Method_7_90A3FA24C88925BF(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B a1, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_90A3FA24C88925BF_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_7_BECD032E88F61273(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot* a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_BECD032E88F61273_OFFSET))(a1);
		}

		static ::System::Boolean Method_7_90A3FA24C88925BF_1(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B a1, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B, ::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot_Enum_3_298925B4FFB28E0B))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_90A3FA24C88925BF_1_OFFSET))(a1, a2);
		}

		::System::Void Method_7_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_AUTOBATTLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_A1C7122184516C18_OFFSET))(this);
		}
	};
}
