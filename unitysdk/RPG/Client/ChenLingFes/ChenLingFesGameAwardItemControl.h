#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardItemViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E8710)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E88B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E8520)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5E83A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E8940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5E88E0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameAwardItemControl_TypeDefinitionIndex = 73997;

	class ChenLingFesGameAwardItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::UnityEngine::UI::Text* _TextDesc; // 0x38
		::UnityEngine::UI::Text* _TextValue; // 0x40
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
