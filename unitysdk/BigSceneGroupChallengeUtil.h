#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL_CHECKCURRENTTEAMAVATARISINAREA_OFFSET UNITYSDK_OFFSET(0x15DD19A0)
#define BIGSCENEGROUPCHALLENGEUTIL_CHECKTELEPROTANDREGISTERDYNAMICGROUP_OFFSET UNITYSDK_OFFSET(0x15DD1C00)
#define BIGSCENEGROUPCHALLENGEUTIL_OPENMONSTERCARDPOPUIBYGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x15DD1D70)
#define BIGSCENEGROUPCHALLENGEUTIL_REGISTERDYNAMICGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x15DD1850)
#define BIGSCENEGROUPCHALLENGEUTIL_SETSTARTGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x15DD15F0)
#define BIGSCENEGROUPCHALLENGEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD2010)

inline static constexpr unsigned int BigSceneGroupChallengeUtil_TypeDefinitionIndex = 63181;

class BigSceneGroupChallengeUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL__CTOR_OFFSET))(this);
	}

	static ::System::Void SetStartGroupChallenge(::System::UInt32 groupID, ::System::UInt32 challengeID, ::System::Action_1<::System::Boolean>* ret, ::System::Boolean isDynamic)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_SETSTARTGROUPCHALLENGE_OFFSET))(groupID, challengeID, ret, isDynamic);
	}

	static ::System::Void RegisterDynamicGroupChallenge(::Struct_2_ABC67D4EFBF3BD9A_6 levelInfo, ::System::Action_1<::System::Boolean>* ret, ::System::Boolean isDynamic, ::System::Boolean forceResetTeamData)
	{
		return ((::System::Void(*)(::Struct_2_ABC67D4EFBF3BD9A_6, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_REGISTERDYNAMICGROUPCHALLENGE_OFFSET))(levelInfo, ret, isDynamic, forceResetTeamData);
	}

	static ::System::Boolean CheckCurrentTeamAvatarIsInArea(::System::String* areaID)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_CHECKCURRENTTEAMAVATARISINAREA_OFFSET))(areaID);
	}

	static ::System::Void CheckTeleprotAndRegisterDynamicGroup(::Struct_2_ABC67D4EFBF3BD9A_6 levelInfo, ::System::Action_1<::System::Boolean>* ret)
	{
		return ((::System::Void(*)(::Struct_2_ABC67D4EFBF3BD9A_6, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_CHECKTELEPROTANDREGISTERDYNAMICGROUP_OFFSET))(levelInfo, ret);
	}

	static ::System::Void OpenMonsterCardPopUIByGroupChallenge(::System::Int32 groupID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL_OPENMONSTERCARDPOPUIBYGROUPCHALLENGE_OFFSET))(groupID);
	}
};
