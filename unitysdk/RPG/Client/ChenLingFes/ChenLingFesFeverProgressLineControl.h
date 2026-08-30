#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UILineRenderer; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC50390)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC50A90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC4FFD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC4FEA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC50500)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESSWITHLERP_OFFSET UNITYSDK_OFFSET(0x1CC50640)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC50490)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesFeverProgressLineControl_TypeDefinitionIndex = 79975;

	class ChenLingFesFeverProgressLineControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UILineRenderer* _LineRenderer; // 0x38
		::RPG::Client::UIValueChangeAnimation* _ValueChangeAnimation; // 0x40
		::System::Single _ProgressValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshProgressWithLerp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESSWITHLERP_OFFSET))(this);
		}

		::System::Void _RefreshProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
