#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC0970)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC0A20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC0660)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC05A0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridControl_TypeDefinitionIndex = 81336;

	class ChenLingFesItemPlaceGridControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _Node1; // 0x40
		::UnityEngine::Transform* _Node2; // 0x48
		::UnityEngine::Transform* _Node3; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
