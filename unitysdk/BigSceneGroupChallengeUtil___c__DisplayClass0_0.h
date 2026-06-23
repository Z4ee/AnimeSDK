#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_3_025FF4981524A424_590;
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1014FBE0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x1014FBF0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET UNITYSDK_OFFSET(0x1014FD60)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET UNITYSDK_OFFSET(0x1014FC00)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c__DisplayClass0_0_TypeDefinitionIndex = 63185;

class BigSceneGroupChallengeUtil___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* ret; // 0x10
	::System::UInt32 challengeID; // 0x18
	::System::UInt32 groupID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__0(::Class_0_16E4307DCC419505_29* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET))(this, _);
	}

	::System::Void _SetStartGroupChallenge_g__sendStart_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__3(::System::Boolean isSuccess, ::Class_3_025FF4981524A424_590* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_590*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET))(this, isSuccess, rsp);
	}
};
