#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_15A90519F8F6BAF1_OFFSET UNITYSDK_OFFSET(0x19E58AB0)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_47A7AE27430F6F68_OFFSET UNITYSDK_OFFSET(0x19E58B30)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E58B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeliobusChallengeExitNotify_TypeDefinitionIndex = 20494;

	class WaitHeliobusChallengeExitNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ChallengeGroupID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15A90519F8F6BAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_15A90519F8F6BAF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47A7AE27430F6F68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_47A7AE27430F6F68_OFFSET))(a1, a2);
		}
	};
}
