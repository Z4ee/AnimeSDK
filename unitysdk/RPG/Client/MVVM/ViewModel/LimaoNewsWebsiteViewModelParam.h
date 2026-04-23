#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MVVM/ViewModel/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET UNITYSDK_OFFSET(0xA76AEB0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0xA76B0B0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET UNITYSDK_OFFSET(0xA76AFB0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET UNITYSDK_OFFSET(0xA76AF30)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET UNITYSDK_OFFSET(0xA76B030)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA76AE30)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xA76B150)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0xA76B190)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0xA76B170)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0xA76B130)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xA76B160)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0xA76B1A0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0xA76B180)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0xA76B140)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA76AEA0)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsWebsiteViewModelParam_TypeDefinitionIndex = 68419;

	class LimaoNewsWebsiteViewModelParam : public ::System::Object
	{
	public:
		::System::UInt32 _MoveToPostID_k__BackingField; // 0x10
		::System::UInt32 _TopPostID_k__BackingField; // 0x14
		::System::UInt32 _IssueID_k__BackingField; // 0x18
		::System::Boolean IsMoveToNewPost; // 0x1C
		::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum _ViewTab_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* Create()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET))();
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateDefaultTab(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum defaultTabType)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET))(defaultTabType);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateSelectedIssue(::System::UInt32 issueID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET))(issueID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateMoveToPost(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET))(postID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateTopPost(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET))(postID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateMoveToNewPost()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET))();
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum get_ViewTab()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET))(this);
		}

		::System::Void set_ViewTab(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET))(this, value);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_TopPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET))(this);
		}

		::System::Void set_TopPostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET))(this, value);
		}

		::System::UInt32 get_MoveToPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET))(this);
		}

		::System::Void set_MoveToPostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET))(this, value);
		}
	};
}
