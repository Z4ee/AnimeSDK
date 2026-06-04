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

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNTTEXT_OFFSET UNITYSDK_OFFSET(0xB5FAC60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB5FAC10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xB5FACF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ENABLERAYCAST_OFFSET UNITYSDK_OFFSET(0xB5FADE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5F9210)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0xB5FAEA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xB5FAE80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB5FAE90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB5F9B40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0xB5FA360)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_RARE_OFFSET UNITYSDK_OFFSET(0xB5FA410)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_GET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xB5FADC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ENABLERAYCAST_OFFSET UNITYSDK_OFFSET(0xB5FADF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0xB5FABA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xB5FAAA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB5FAB30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL_SET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xB5FADD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5FAA00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5FA620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xB5FA6A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYITEMVIEWMODEL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xB5FAEB0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayItemViewModel_TypeDefinitionIndex = 74034;

	class ChenLingFesGameplayItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesItemData* _Data; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* _TagViewModels_k__BackingField; // 0x28
		::System::Boolean _IsChecked; // 0x30
		::System::Boolean _EnableRayCast; // 0x31
		::System::Boolean _IsDisable; // 0x32
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
