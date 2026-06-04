#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xBD26C10)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBD269B0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD26990)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWACTIVITYREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD26B70)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD26AB0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xBD26CC0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBD26C60)

namespace RPG::Client
{
	inline static constexpr unsigned int IdleLiveActivityData_TypeDefinitionIndex = 57628;

	class IdleLiveActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDLELIVEACTIVITYDATA__CTOR_OFFSET))(this, a1);
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
