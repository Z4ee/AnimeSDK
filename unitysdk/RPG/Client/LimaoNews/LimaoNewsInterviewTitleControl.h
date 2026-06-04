#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD846A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD84350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD84230)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD84730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD846D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTitleControl_TypeDefinitionIndex = 73825;

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

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
