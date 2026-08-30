#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B881B10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B881B40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GETTRIALAVATARS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1B881BA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GET_ISCHALLENGED_B__54_0_OFFSET UNITYSDK_OFFSET(0x1B881BB0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B881B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeStageData___c_TypeDefinitionIndex = 62001;

	class ActivityStrongChallengeStageData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x62EE0);
		}
		static ::RPG::Client::ActivityStrongChallengeStageData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityStrongChallengeStageData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x62EE8);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x62EF0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x62EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeBossDetailData* __ctor_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityStrongChallengeBossDetailData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__36_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GETTRIALAVATARS_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsChallenged_b__54_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GET_ISCHALLENGED_B__54_0_OFFSET))(this, a1);
		}
	};
}
