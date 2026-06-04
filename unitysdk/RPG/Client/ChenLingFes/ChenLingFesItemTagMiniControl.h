#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB624710)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB624790)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6245B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB624490)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB624820)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6247C0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemTagMiniControl_TypeDefinitionIndex = 73995;

	class ChenLingFesItemTagMiniControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::UnityEngine::UI::Text* _Text; // 0x38
		::UnityEngine::UI::Image* _Icon; // 0x40
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitcher; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
