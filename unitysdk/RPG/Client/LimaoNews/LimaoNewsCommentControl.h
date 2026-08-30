#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x195080E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19507F10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19507E70)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentControl_TypeDefinitionIndex = 79027;

	class LimaoNewsCommentControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _ImageUser; // 0x38
		::UnityEngine::UI::Text* _TextDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
