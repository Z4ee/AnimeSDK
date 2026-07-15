#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_47A7AE27430F6F68_OFFSET UNITYSDK_OFFSET(0x1B8A6E60)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_B240E1430D0E7C03_OFFSET UNITYSDK_OFFSET(0x1B8A6E20)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeliobusChallengeExitNotify_TypeDefinitionIndex = 20909;

	class WaitHeliobusChallengeExitNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ChallengeGroupID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B240E1430D0E7C03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_B240E1430D0E7C03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47A7AE27430F6F68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_METHOD_3_47A7AE27430F6F68_OFFSET))(a1, a2);
		}
	};
}
