#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA5DAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BA5DA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1BA5DB80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BA5DBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5DC70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmu_TypeDefinitionIndex = 74888;

	class IdleLiveTextDanmu : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase
	{
	public:
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x38
		::RPG::Client::TextID LFGMLJCCPCH; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Initialize(::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void SetText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_SETTEXT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_TOSTRING_OFFSET))(this);
		}
	};
}
