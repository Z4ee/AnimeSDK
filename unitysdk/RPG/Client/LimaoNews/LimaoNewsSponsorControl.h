#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3E5370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3E4ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3E4C00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorControl_TypeDefinitionIndex = 80399;

	class LimaoNewsSponsorControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* _MonoPrefabSwitcher; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemControl*>* _SponsorControls; // 0x48
		::UnityEngine::UI::Button* _BtnContact; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
