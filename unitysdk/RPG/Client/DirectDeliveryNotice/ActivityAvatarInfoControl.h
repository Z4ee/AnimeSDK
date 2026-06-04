#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F2A20)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB7F1A20)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB7F2800)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB7F2A50)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB7F2AB0)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int ActivityAvatarInfoControl_TypeDefinitionIndex = 73897;

	class ActivityAvatarInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _ImgDamageType; // 0x38
		::UnityEngine::UI::Text* _TextAvatarName; // 0x40
		::UnityEngine::UI::Button* _BtnAvatarDetail; // 0x48
		::UnityEngine::UI::Image* _ImgProfessionIcon; // 0x50
		::UnityEngine::UI::Text* _TxtProfessionName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}
	};
}
