#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_172;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_DEEPCOPYFROM_OFFSET UNITYSDK_OFFSET(0xCA39DA0)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA3B7B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xCA39410)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA38FC0)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xCA39D10)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__DEEPCOPYCHALLENGETARGETDATA_OFFSET UNITYSDK_OFFSET(0xCA3BA10)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__UPDATECHALLENGETARGETDATA_OFFSET UNITYSDK_OFFSET(0xCA3BC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_ChallengeProgress_TypeDefinitionIndex = 63157;

	class ChallengeInstance_ChallengeProgress : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* ChallengeTargetDatas; // 0x10
		::RPG::Client::ChallengeInstance* _ChallengeInstanceRef; // 0x18
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_172*>* KillMonsters; // 0x20
		::System::UInt32 TurnCost; // 0x28
		::System::UInt32 DeadAvatarNum; // 0x2C
		::System::UInt32 Score; // 0x30

		::System::Void _ctor(::RPG::Client::ChallengeInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::ChallengeData* a1, ::RPG::Client::ChallengeInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_172*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_172*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATEPROGRESS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATETARGETSTATUS_OFFSET))(this, a1);
		}

		::System::Void DeepCopyFrom(::RPG::Client::ChallengeInstance_ChallengeProgress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance_ChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_DEEPCOPYFROM_OFFSET))(this, a1);
		}

		::System::Void _DeepCopyChallengeTargetData(::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__DEEPCOPYCHALLENGETARGETDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateChallengeTargetData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__UPDATECHALLENGETARGETDATA_OFFSET))(this, a1);
		}
	};
}
