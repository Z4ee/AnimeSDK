#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesItemDetailViewModel___c__DisplayClass3_0.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_50AC12A2F890597C;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B747870)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B753E50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x1B752E10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B752120)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B7495C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B752DB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_RARE_OFFSET UNITYSDK_OFFSET(0x1B752E70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_TAGVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1B753E70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B753E60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B749600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SYNC_OFFSET UNITYSDK_OFFSET(0x1B749670)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__BUILDPLACEGRIDROWS_OFFSET UNITYSDK_OFFSET(0x1B753010)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B752F20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1B752F40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0x1B753E10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__EXPANDBOUNDS_3_0_OFFSET UNITYSDK_OFFSET(0x1B753D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL___BUILDPLACEGRIDROWS_G__TOCELLKEY_3_1_OFFSET UNITYSDK_OFFSET(0x1B753D50)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemDetailViewModel_TypeDefinitionIndex = 80067;

	class ChenLingFesItemDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* ItemViewModel; // 0x20
		::Class_1_50AC12A2F890597C* _GameplayBridge; // 0x28
		::Sofa::Core::SimpleCommand* _ClickOutSideCommand_k__BackingField; // 0x30
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*>* PlaceGridRows; // 0x40
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

		::Sofa::Core::SimpleCommand* get_ClickOutSideCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_GET_CLICKOUTSIDECOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickOutSideCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILVIEWMODEL_SET_CLICKOUTSIDECOMMAND_OFFSET))(this, a1);
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
