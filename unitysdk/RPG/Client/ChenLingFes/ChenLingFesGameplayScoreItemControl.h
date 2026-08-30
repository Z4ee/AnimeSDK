#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayScoreItemViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B736E60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL_SETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7338D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ADJUSTNODEFLY_OFFSET UNITYSDK_OFFSET(0x1B7374F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7377B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B736D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B7372B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B736BC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHCOMPLETESTATE_OFFSET UNITYSDK_OFFSET(0x1B737000)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B737180)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHTARGETSCORE_OFFSET UNITYSDK_OFFSET(0x1B736F10)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayScoreItemControl_TypeDefinitionIndex = 79992;

	class ChenLingFesGameplayScoreItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _TextTargetScore; // 0x38
		::UnityEngine::UI::Image* _ImageProgress; // 0x40
		::UnityEngine::Transform* _NodeFinished; // 0x48
		::UnityEngine::Transform* _NodeNotFinished; // 0x50
		::UnityEngine::Animation* _AnimState; // 0x58
		::UnityEngine::Transform* _NodeFlyEnd; // 0x60
		::UnityEngine::Transform* _NodeFlyMid; // 0x68
		::UnityEngine::Transform* _NodeFlyTarget; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetEndPosition(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL_SETENDPOSITION_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshTargetScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHTARGETSCORE_OFFSET))(this);
		}

		::System::Void _RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void _RefreshCompleteState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__REFRESHCOMPLETESTATE_OFFSET))(this, a1);
		}

		::System::Void _AdjustNodeFly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL__ADJUSTNODEFLY_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
