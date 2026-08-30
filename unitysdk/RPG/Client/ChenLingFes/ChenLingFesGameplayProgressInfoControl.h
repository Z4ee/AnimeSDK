#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameDayItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayProgressInfoViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GETNODESTAR_OFFSET UNITYSDK_OFFSET(0xCB49B20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB4AD40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0xCB49B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4C060)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB4A570)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB4B620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB4A120)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCB4B740)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xCB49BB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHHEADERTEXT_OFFSET UNITYSDK_OFFSET(0xCB4AF50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHNEXTGROUPCHENLINGCOUNT_OFFSET UNITYSDK_OFFSET(0xCB4ADF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHSTARTEXT_OFFSET UNITYSDK_OFFSET(0xCB4B260)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHVISIBILITY_OFFSET UNITYSDK_OFFSET(0xCB4B3B0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayProgressInfoControl_TypeDefinitionIndex = 79990;

	class ChenLingFesGameplayProgressInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::RPG::Client::UIStateCtrl* _DayStateCtrl; // 0x38
		::UnityEngine::UI::Image* _ImageDayProgress; // 0x40
		::RPG::Client::UIStateCtrl* _CountDownStateCtrl; // 0x48
		::UnityEngine::UI::Image* _ImageCountDownProgress; // 0x50
		::UnityEngine::Transform* _NodeStar; // 0x58
		::UnityEngine::Transform* _NodeNormal; // 0x60
		::UnityEngine::Transform* _NodeEndless; // 0x68
		::UnityEngine::UI::Text* _TextGameWeek; // 0x70
		::UnityEngine::UI::Text* _TextGameDay; // 0x78
		::UnityEngine::UI::Text* _TextStar; // 0x80
		::UnityEngine::UI::Text* _TextCountDown; // 0x88
		::UnityEngine::Transform* _NodeNextGroupChenLingCount; // 0x90
		::UnityEngine::UI::Text* _TextNextGroupChenLingCount; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemControl*>* _GameDayItems; // 0xA0
		::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel* _BindedViewModel; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetNodeStar()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GETNODESTAR_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshHeaderText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHHEADERTEXT_OFFSET))(this);
		}

		::System::Void _RefreshStarText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHSTARTEXT_OFFSET))(this);
		}

		::System::Void _RefreshNextGroupChenLingCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHNEXTGROUPCHENLINGCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHVISIBILITY_OFFSET))(this);
		}

		::System::Void _RefreshCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHCOUNTDOWN_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
