#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F77B71357054B00.h"
#include "unitysdk/MoleMole/MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285.h"
#include "unitysdk/MoleMole/MonoBangBooAutoBattleSlot_Struct_2_1B86EF0E2A277D72.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET UNITYSDK_OFFSET(0x191513D0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_135905C820F0E175_OFFSET UNITYSDK_OFFSET(0x19151650)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_4A3F02CE2DBC2621_1_OFFSET UNITYSDK_OFFSET(0x19151600)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_4A3F02CE2DBC2621_OFFSET UNITYSDK_OFFSET(0x191515B0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x19150780)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET UNITYSDK_OFFSET(0x19150F90)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET UNITYSDK_OFFSET(0x19151370)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET UNITYSDK_OFFSET(0x19151310)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET UNITYSDK_OFFSET(0x19150680)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19151510)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_TypeDefinitionIndex = 58834;

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
		::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 Field_7_12; // 0x74
		::MoleMole::MonoGamepadSelectable* Field_7_13; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::MoleMole::MonoBangBooAutoBattleSlot_Struct_2_1B86EF0E2A277D72>* Field_7_14; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET))(this);
		}

		::System::Void SetEff(::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET))(this, a1);
		}

		::System::Void SetValidColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetIsOverLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::MoleMole::MonoBangBooAutoBattleSlot*>* GetAll()
		{
			return ((::Il2CppArray<::MoleMole::MonoBangBooAutoBattleSlot*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET))();
		}

		static ::System::Boolean Method_7_4A3F02CE2DBC2621(::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 a1, ::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_4A3F02CE2DBC2621_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_7_4A3F02CE2DBC2621_1(::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 a1, ::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285 a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285, ::MoleMole::MonoBangBooAutoBattleSlot_Enum_3_1468EE9C811FF285))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_4A3F02CE2DBC2621_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_7_135905C820F0E175(::MoleMole::MonoBangBooAutoBattleSlot* a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_135905C820F0E175_OFFSET))(a1);
		}

		::System::Void Method_7_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_METHOD_7_A1C7122184516C18_OFFSET))(this);
		}
	};
}
