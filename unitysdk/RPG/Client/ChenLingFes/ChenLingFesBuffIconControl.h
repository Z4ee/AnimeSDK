#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesBuffIconViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E4520)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E45A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E4470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5E43B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5E4630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5E45D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffIconControl_TypeDefinitionIndex = 73956;

	class ChenLingFesBuffIconControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::UnityEngine::UI::Image* _Icon; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
