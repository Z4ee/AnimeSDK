#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0xB10E3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB10E5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xB10E610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0xB10E450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0xB10E390)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideDungeonImpl_TypeDefinitionIndex = 70253;

	class FailGuideDungeonImpl : public ::System::Object
	{
	public:
		::System::UInt16 _RecommendDungeonFloor; // 0x10

		::System::Void _ctor(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL_ONTRIGGER_OFFSET))(this);
		}
	};
}
