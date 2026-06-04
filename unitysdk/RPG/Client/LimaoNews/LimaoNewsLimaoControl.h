#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8F4D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8F130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8F010)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8F560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8F500)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLimaoControl_TypeDefinitionIndex = 73805;

	class LimaoNewsLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Image; // 0x38
		::UnityEngine::UI::Text* _Text; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
