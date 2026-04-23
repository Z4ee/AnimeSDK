#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDanmuBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9BD6EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9BD6DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_SETTEXT_OFFSET UNITYSDK_OFFSET(0x9BD6F60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BD6FD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD7050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU___IFIXBASEPROXY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9BD7080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BD7090)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmu_TypeDefinitionIndex = 69247;

	class IdleLiveTextDanmu : public ::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase
	{
	public:
		::UnityEngine::UI::Text* Field_6_0; // 0x38
		::RPG::Client::TextID Field_6_1; // 0x40

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

		::System::Void __iFixBaseProxy_OnCreate(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU___IFIXBASEPROXY_ONCREATE_OFFSET))(this, P0);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMU___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
