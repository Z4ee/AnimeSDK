#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsLocationData; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8FB30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8FBA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8FA60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8F9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8FC30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8FBD0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLocationControl_TypeDefinitionIndex = 73806;

	class LimaoNewsLocationControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsLocationData* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLocationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
