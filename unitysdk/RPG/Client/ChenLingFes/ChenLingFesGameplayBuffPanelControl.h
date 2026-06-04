#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffDetailControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayBuffPanelViewModel; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelContainer; }
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F0730)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F1020)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ENSUREDETAILCONTROL_OFFSET UNITYSDK_OFFSET(0xB5F0A40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F0090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONBUFFICONSCHANGED_OFFSET UNITYSDK_OFFSET(0xB5F0CB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONDETAILPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xB5F0D10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONGETBUFFICONITEM_OFFSET UNITYSDK_OFFSET(0xB5F0D70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5EFE00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__REFRESHICONLIST_OFFSET UNITYSDK_OFFSET(0xB5F07B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB5F10B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5F1050)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayBuffPanelControl_TypeDefinitionIndex = 73958;

	class ChenLingFesGameplayBuffPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Button* _BtnBuff; // 0x38
		::UnityEngine::Transform* _NodeBuffPanel; // 0x40
		::RPG::Client::StaticListView* _ListView; // 0x48
		::RPG::Client::PrefabLoadMeta* _DetailLoadMeta; // 0x50
		::RPG::Client::ChenLingFes::ChenLingFesBuffDetailControl* _DetailControl; // 0x58
		::RPG::Client::SequentialPanelContainer::SequentialPanelContainer* _SequentialPanelContainer; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _EnsureDetailControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ENSUREDETAILCONTROL_OFFSET))(this);
		}

		::System::Void _OnBuffIconsChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONBUFFICONSCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDetailPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONDETAILPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshIconList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__REFRESHICONLIST_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnGetBuffIconItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL__ONGETBUFFICONITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
