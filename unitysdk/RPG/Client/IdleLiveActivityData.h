#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA622250)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA621FF0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA621FD0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWACTIVITYREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA6221B0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA6220F0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA622310)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA6222A0)

namespace RPG::Client
{
	inline static constexpr unsigned int IdleLiveActivityData_TypeDefinitionIndex = 56841;

	class IdleLiveActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA__CTOR_OFFSET))(this, id);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean _IsShowLightConeRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWLIGHTCONEREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowActivityRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWACTIVITYREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}
	};
}
