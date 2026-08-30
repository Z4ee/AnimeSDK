#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::GameCore { class DynamicValue; }

#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC07D0)
#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER___C__DISPLAYCLASS6_0___TRYGET5WEEKDURATION_B__0_OFFSET UNITYSDK_OFFSET(0xCAC09F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeWarningHintHelper___c__DisplayClass6_0_TypeDefinitionIndex = 63188;

	class ChallengeWarningHintHelper___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeGroupData* group; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGet5WeekDuration_b__0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER___C__DISPLAYCLASS6_0___TRYGET5WEEKDURATION_B__0_OFFSET))(this, a1);
		}
	};
}
