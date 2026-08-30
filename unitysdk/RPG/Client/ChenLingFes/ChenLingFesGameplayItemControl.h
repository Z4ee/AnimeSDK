#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagMiniControl; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class GraphicCast; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_GETCENTERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B726D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B727860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1B729190)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1B726B40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_SETMESSAGER_OFFSET UNITYSDK_OFFSET(0x1B726AF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1B7288E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7291F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B727070)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0x1B728B30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONCLICKROOT_OFFSET UNITYSDK_OFFSET(0x1B728830)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B728C60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B728650)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONENABLERAYCASTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B728E60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B726EC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONSELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B728BF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1B726CD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__REFRESHNAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B727910)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPRARITY_OFFSET UNITYSDK_OFFSET(0x1B7280B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPSTATES_OFFSET UNITYSDK_OFFSET(0x1B728290)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPTAGS_OFFSET UNITYSDK_OFFSET(0x1B727A80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__TRYSHOWITEMDETAIL_OFFSET UNITYSDK_OFFSET(0x1B728940)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayItemControl_TypeDefinitionIndex = 79985;

	class ChenLingFesGameplayItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::System::Action_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayItemControl*>* OnClickItem; // 0x38
		::System::Action_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayItemControl*>* OnSelectItem; // 0x40
		::System::Func_1<::System::Boolean>* CanInteract; // 0x48
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x50
		::RPG::Client::AnimatorButton* _GamepadBtnDetail; // 0x58
		::UnityEngine::Animation* _Anim; // 0x60
		::UnityEngine::UI::Text* _TextName; // 0x68
		::RPG::Client::PrefabLoadMeta* _TagLoadMeta; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagMiniControl*>* _Tags; // 0x78
		::UnityEngine::UI::Image* _ImageIcon; // 0x80
		::UnityEngine::UI::GraphicCast* _Cast; // 0x88
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x90
		::UnityEngine::CanvasGroup* _CanvasGroup; // 0x98
		::UnityEngine::CanvasGroup* _RootCanvasGroup; // 0xA0
		::System::Boolean _IsDragging; // 0xA8
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetMessager(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_SETMESSAGER_OFFSET))(this, a1);
		}

		::System::Void PlayFadeIn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_PLAYFADEIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_GETCENTERWORLDPOSITION_OFFSET))(this);
		}

		::System::Void _PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__PLAYFADEIN_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnClickRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONCLICKROOT_OFFSET))(this);
		}

		::System::Void _OnClickDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONCLICKDETAIL_OFFSET))(this);
		}

		::System::Void _OnSelectHandler(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONSELECTHANDLER_OFFSET))(this, a1);
		}

		::System::Void _TryShowItemDetail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__TRYSHOWITEMDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean _CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__CANINTERACT_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshNameText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__REFRESHNAMETEXT_OFFSET))(this);
		}

		::System::Void _OnEnableRayCastChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__ONENABLERAYCASTCHANGED_OFFSET))(this);
		}

		::System::Void _SetupTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPTAGS_OFFSET))(this);
		}

		::System::Void _SetupRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPRARITY_OFFSET))(this);
		}

		::System::Void _SetupStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL__SETUPSTATES_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMCONTROL_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}
	};
}
