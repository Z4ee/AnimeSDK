#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA314980)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA314970)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWHANDBOOKREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA314B80)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA314AE0)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWSTORYARCHIVEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA314EF0)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA315210)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicActivityData_TypeDefinitionIndex = 50019;

	class RogueMagicActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__CTOR_OFFSET))(this, id);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowQuestRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWQUESTREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowHandbookRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWHANDBOOKREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowStoryArchiveRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWSTORYARCHIVEREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
