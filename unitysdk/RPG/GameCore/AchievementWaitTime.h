#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_7ABF897FB14CEEE7_OFFSET UNITYSDK_OFFSET(0x1CD6E760)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_8F7DB410C408A8B6_OFFSET UNITYSDK_OFFSET(0x1CD6E7A0)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6E790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementWaitTime_TypeDefinitionIndex = 20799;

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

		static ::System::Void Method_3_7ABF897FB14CEEE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementWaitTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementWaitTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_7ABF897FB14CEEE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F7DB410C408A8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementWaitTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_METHOD_3_8F7DB410C408A8B6_OFFSET))(a1, a2);
		}
	};
}
