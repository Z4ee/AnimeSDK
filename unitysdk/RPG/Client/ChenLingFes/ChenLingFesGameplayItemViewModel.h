#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesItemData; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNTTEXT_OFFSET UNITYSDK_OFFSET(0x1B729B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B729AB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x1B729C10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ENABLERAYCAST_OFFSET UNITYSDK_OFFSET(0x1B729030)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B727A10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x1B7290D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x1B729110)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B729150)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B728600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B728F80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_RARE_OFFSET UNITYSDK_OFFSET(0x1B729070)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1B729CE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ENABLERAYCAST_OFFSET UNITYSDK_OFFSET(0x1B729D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x1B729A40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x1B729940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B7299D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1B729CF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7295E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B729220)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1B7292A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B729D90)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayItemViewModel_TypeDefinitionIndex = 80049;

	class ChenLingFesGameplayItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* _TagViewModels_k__BackingField; // 0x20
		::RPG::Client::ChenLingFes::ChenLingFesItemData* _Data; // 0x28
		::System::Boolean _IsDisable; // 0x30
		::System::Boolean _EnableRayCast; // 0x31
		::System::Boolean _IsChecked; // 0x32
		::System::Boolean _IsVisible; // 0x33

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ITEMID_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_CountText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNTTEXT_OFFSET))(this);
		}

		::System::String* get_NameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_NAMETEXT_OFFSET))(this);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_DESCTEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesItemRare get_Rare()
		{
			return ((::RPG::GameCore::ChenLingFesItemRare(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_RARE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* get_TagViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_TAGVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_TagViewModels(::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_TAGVIEWMODELS_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableRayCast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ENABLERAYCAST_OFFSET))(this);
		}

		::System::Void set_EnableRayCast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ENABLERAYCAST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISCHECKED_OFFSET))(this);
		}

		::System::Void set_IsChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
