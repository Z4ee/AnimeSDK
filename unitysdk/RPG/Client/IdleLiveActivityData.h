#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17963490)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x17963230)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17963210)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWACTIVITYREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x179633F0)
#define RPG_CLIENT_IDLELIVEACTIVITYDATA__ISSHOWLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x17963330)

namespace RPG::Client
{
	inline static constexpr unsigned int IdleLiveActivityData_TypeDefinitionIndex = 58893;

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
	};
}
