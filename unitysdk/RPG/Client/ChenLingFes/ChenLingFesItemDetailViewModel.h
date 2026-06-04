#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesItemDetailViewModel___c__DisplayClass3_0.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_50AC12A2F890597C;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB621BF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0xB6230D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xB621A20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB620D60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB623050)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0xB6219C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_RARE_OFFSET UNITYSDK_OFFSET(0xB621A80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xB6230F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0xB6230E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB623060)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SYNC_OFFSET UNITYSDK_OFFSET(0xB621DA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__BUILDPLACEGRIDROWS_OFFSET UNITYSDK_OFFSET(0xB622210)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB621CB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xB621CD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0xB623010)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__EXPANDBOUNDS_3_0_OFFSET UNITYSDK_OFFSET(0xB622F00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__TOCELLKEY_3_1_OFFSET UNITYSDK_OFFSET(0xB622F50)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemDetailViewModel_TypeDefinitionIndex = 74052;

	class ChenLingFesItemDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>* PlaceGridRows; // 0x20
		::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* ItemViewModel; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::Class_1_2FDE33CCAE591AA8* _ClickOutSideCommand_k__BackingField; // 0x38
		::Class_1_50AC12A2F890597C* _GameplayBridge; // 0x40
		::System::Boolean _IsShow; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel* Create(::Class_1_50AC12A2F890597C* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel*(*)(::Class_1_50AC12A2F890597C*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SYNC_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__INIT_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>* _BuildPlaceGridRows(::System::UInt32 a1, ::Class_1_50AC12A2F890597C* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>*(*)(::System::UInt32, ::Class_1_50AC12A2F890597C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__BUILDPLACEGRIDROWS_OFFSET))(a1, a2);
		}

		::System::Void _OnClickOutSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__ONCLICKOUTSIDE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_ClickOutSideCommand()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickOutSideCommand(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET))(this, a1);
		}

		::System::String* get_NameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_NAMETEXT_OFFSET))(this);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_DESCTEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>* get_TagViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_TAGVIEWMODELS_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesItemRare get_Rare()
		{
			return ((::RPG::GameCore::ChenLingFesItemRare(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_RARE_OFFSET))(this);
		}

		static ::System::Void __BuildPlaceGridRows_g__ExpandBounds_3_0(::RPG::GameCore::ChenLingFesPosition* a1, ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel___c__DisplayClass3_0& a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesPosition*, ::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__EXPANDBOUNDS_3_0_OFFSET))(a1, a2);
		}

		static ::System::String* __BuildPlaceGridRows_g__ToCellKey_3_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__TOCELLKEY_3_1_OFFSET))(a1, a2);
		}
	};
}
