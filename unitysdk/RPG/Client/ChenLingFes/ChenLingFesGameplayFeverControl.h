#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayFeverViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_GETNODEFEVERFLYANCHOR_OFFSET UNITYSDK_OFFSET(0xCB40AA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB41040)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0xCB40A50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB414F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB40BD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB40B10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONPROGRESSVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCB41490)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCB411F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__REFRESHFEVERANIM_OFFSET UNITYSDK_OFFSET(0xCB41250)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB410F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayFeverControl_TypeDefinitionIndex = 79979;

	class ChenLingFesGameplayFeverControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animation* _FeverAnim; // 0x38
		::UnityEngine::UI::Text* _TextProgress; // 0x40
		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressControl* _FeverProgressControl; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_ONTICK_OFFSET))(this);
		}

		::UnityEngine::Transform* GetNodeFeverFlyAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_GETNODEFEVERFLYANCHOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshFeverAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__REFRESHFEVERANIM_OFFSET))(this);
		}

		::System::Void _OnProgressViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__ONPROGRESSVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL__REFRESHPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
