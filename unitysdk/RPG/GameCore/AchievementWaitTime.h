#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_819F2AA6F1D6F72F_OFFSET UNITYSDK_OFFSET(0x193C93C0)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_8F7DB410C408A8B6_OFFSET UNITYSDK_OFFSET(0x193C9440)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x193C9410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementWaitTime_TypeDefinitionIndex = 19885;

	class AchievementWaitTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StartEvent; // 0x18
		::RPG::GameCore::DynamicString* ResetEvent; // 0x20
		::System::Single WaitTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_819F2AA6F1D6F72F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementWaitTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementWaitTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_819F2AA6F1D6F72F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F7DB410C408A8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementWaitTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_8F7DB410C408A8B6_OFFSET))(a1, a2);
		}
	};
}
