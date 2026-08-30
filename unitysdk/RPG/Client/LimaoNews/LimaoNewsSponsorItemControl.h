#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ABE80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4AB930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C4AB890)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl_TypeDefinitionIndex = 79077;

	class LimaoNewsSponsorItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Button* _Btn; // 0x38
		::UnityEngine::UI::Image* _ImgIcon; // 0x40
		::UnityEngine::UI::Image* _ImgHintIcon; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
