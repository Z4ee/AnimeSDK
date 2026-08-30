#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressLineControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_GET_NODEANCHOR_OFFSET UNITYSDK_OFFSET(0x1CC4EEF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC4F460)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1CC4F770)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4FE70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC4EF30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC4EE10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC4FA20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__REFRESHANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1CC4F550)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesFeverProgressControl_TypeDefinitionIndex = 79976;

	class ChenLingFesFeverProgressControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animator* _AnimatorState; // 0x38
		::UnityEngine::Transform* _NodeAnchor; // 0x40
		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressLineControl* _LineControl; // 0x48
		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressLineControl* _LineControlFever; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_NodeAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_GET_NODEANCHOR_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL__REFRESHANIMSTATE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
