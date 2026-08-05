#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType.h"

class Class_1_A71FF9B2461C0AD1;
class Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8;
class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_566;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x14342DE0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x14342E70)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14342E20)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x14342D90)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14343360)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14343230)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__CREATECOUNTER_OFFSET UNITYSDK_OFFSET(0x143431A0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x14342CB0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__INCREASECOUNTER_OFFSET UNITYSDK_OFFSET(0x14342F60)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__TRYCALCKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x14342FF0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x143441F0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14344280)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_TypeDefinitionIndex = 70246;

	class ChallengeSubTypeMonsterKill : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::Class_1_A71FF9B2461C0AD1* _hitDataCounter; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _countedKills; // 0x28
		::System::Int32 currentKillCount; // 0x30
		::System::Int32 challengeKillCount; // 0x34
		::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType leafConditionType; // 0x38

		::System::Void _ctor(::Class_2_208CC9941471731A_566* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_566*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void _IncreaseCounter(::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8* killEvtData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__INCREASECOUNTER_OFFSET))(this, killEvtData);
		}

		::System::Void _TryCalcKillCount(::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8* killEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__TRYCALCKILLCOUNT_OFFSET))(this, killEvt);
		}

		::System::Void _CreateCounter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL__CREATECOUNTER_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMONSTERKILL___BASE_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
