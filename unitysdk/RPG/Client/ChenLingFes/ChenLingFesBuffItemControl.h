#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesBuffIconControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffItemViewModel; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB2F500)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2F710)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB2EFB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB2EED0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffItemControl_TypeDefinitionIndex = 79973;

	class ChenLingFesBuffItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::RPG::Client::ChenLingFes::ChenLingFesBuffIconControl* _IconControl; // 0x38
		::UnityEngine::UI::Text* _TextName; // 0x40
		::UnityEngine::UI::Text* _TextDesc; // 0x48
		::UnityEngine::Transform* _NodeSplitLine; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesBuffItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
