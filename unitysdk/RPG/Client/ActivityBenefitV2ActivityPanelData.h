#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityBenefitV2RedDotViewModel; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC3DA1B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC3DA260)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC3DA360)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D9DE0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC3D9F00)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xC3D9DF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___ONINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xC3DA4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2ActivityPanelData_TypeDefinitionIndex = 61577;

	class ActivityBenefitV2ActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityBenefitV2RedDotViewModel* _RedDot; // 0xA0
		::System::Boolean _IsDisposed; // 0xA8

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__ONINIT_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void __OnInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___ONINIT_B__3_0_OFFSET))(this);
		}
	};
}
