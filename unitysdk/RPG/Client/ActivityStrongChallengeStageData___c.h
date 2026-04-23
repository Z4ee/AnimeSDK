#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C60450)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C60480)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GETTRIALAVATARS_B__36_0_OFFSET UNITYSDK_OFFSET(0x9C604E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GET_ISCHALLENGED_B__54_0_OFFSET UNITYSDK_OFFSET(0x9C60550)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x9C60490)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeStageData___c_TypeDefinitionIndex = 57110;

	class ActivityStrongChallengeStageData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x3D260);
		}
		static ::RPG::Client::ActivityStrongChallengeStageData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityStrongChallengeStageData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x3D268);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x3D270);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeStageData___c_TypeDefinitionIndex)->GetStaticField(0x3D278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeBossDetailData* __ctor_b__0_0(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityStrongChallengeBossDetailData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C___CTOR_B__0_0_OFFSET))(this, id);
		}

		::RPG::Client::IAvatarInfoProvider* _GetTrialAvatars_b__36_0(::System::UInt32 specialAvatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GETTRIALAVATARS_B__36_0_OFFSET))(this, specialAvatarID);
		}

		::System::Boolean _get_IsChallenged_b__54_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA___C__GET_ISCHALLENGED_B__54_0_OFFSET))(this, avatar);
		}
	};
}
