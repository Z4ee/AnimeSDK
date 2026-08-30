#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffDetailViewModel; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB2D020)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2DBF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB2CC40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONBUFFITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0xCB2D6B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0xCB2D550)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCB2D710)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONGETITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xCB2D860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB2CA60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__REFRESHLIST_OFFSET UNITYSDK_OFFSET(0xCB2D2F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0xCB2D0D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffDetailControl_TypeDefinitionIndex = 79971;

	class ChenLingFesBuffDetailControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::SuperScrollView::LoopListView2* _ListView; // 0x38
		::RPG::Client::MonoClickOutsideDetect* _ClickOutsideDetect; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnClickOutside(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONCLICKOUTSIDE_OFFSET))(this, a1);
		}

		::System::Void _OnBuffItemsChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONBUFFITEMSCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void _RefreshList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__REFRESHLIST_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetItemByIndex(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL__ONGETITEMBYINDEX_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
