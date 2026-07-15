#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client::DirectDeliveryNotice { class ActivityAvatarInfoControl; }
namespace RPG::Client::DirectDeliveryNotice { class DirectDeliveryAvatarRewardToastViewModel; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0050A0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A005170)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A0055C0)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow_TypeDefinitionIndex = 76281;

	class DirectDeliveryAvatarRewardToastWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoControl* _AvatarInfoView; // 0x40
		::UnityEngine::UI::Button* _BtnCollect; // 0x48

		::System::Void _ctor(::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}
	};
}
