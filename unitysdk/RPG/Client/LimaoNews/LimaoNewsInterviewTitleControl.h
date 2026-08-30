#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD45AAF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD45A910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD45A870)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTitleControl_TypeDefinitionIndex = 79058;

	class LimaoNewsInterviewTitleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _IssueIndexText; // 0x38
		::UnityEngine::UI::Text* _TextTitle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
