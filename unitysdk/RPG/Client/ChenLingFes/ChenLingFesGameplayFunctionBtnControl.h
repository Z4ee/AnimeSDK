#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayFunctionBtnViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F6600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F6890)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F5F30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5F5D60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xB5F6830)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__REFRESHBTNSTATE_OFFSET UNITYSDK_OFFSET(0xB5F6680)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F6920)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5F68C0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayFunctionBtnControl_TypeDefinitionIndex = 73968;

	class ChenLingFesGameplayFunctionBtnControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x38
		::RPG::Client::AnimatorButton* _BtnSpeedUp; // 0x40
		::RPG::Client::UIStateCtrl* _StateCtrlDetail; // 0x48
		::RPG::Client::UIStateCtrl* _StateCtrlSpeedUp; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL__REFRESHBTNSTATE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayFunctionBtnViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayFunctionBtnViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
