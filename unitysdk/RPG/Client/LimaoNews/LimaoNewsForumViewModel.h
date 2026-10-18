#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_1294FEF8E985635C;
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModelParam; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_ADDPOST_OFFSET UNITYSDK_OFFSET(0xD3A0540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CHANGEPOSTSTATE_OFFSET UNITYSDK_OFFSET(0xD3A06A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0xD3A0DC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CREATESHOWPOSTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD3A0250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETCANSUBMITPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xD3A0A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xD3A0C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GET_ISSHOWFILTER_OFFSET UNITYSDK_OFFSET(0xD3A0F90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xD3A0160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_MARKVIEWSEEN_OFFSET UNITYSDK_OFFSET(0xD39F460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOSTS_OFFSET UNITYSDK_OFFSET(0xD3A0200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOST_OFFSET UNITYSDK_OFFSET(0xD3A08B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xD3A0860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYCLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0xD3A0F40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYOPENPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xD39F8F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD3A10A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A0100)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsForumViewModel_TypeDefinitionIndex = 80458;

	class LimaoNewsForumViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x20
		::Class_1_1294FEF8E985635C* _Messenger; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostViewModel*>* PostViewModels; // 0x40
		::System::UInt32 _ForceShowPostID; // 0x48
		::System::Boolean _HasViewSeen; // 0x4C
		::System::Boolean IsMoveToNewPost; // 0x4D
		::System::UInt32 MoveToPostID; // 0x50
		::System::UInt32 _TopPostID; // 0x54
		::System::UInt32 OpenPostDetailID; // 0x58

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1, ::RPG::Client::LimaoNews::LimaoNewsPostService* a2, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a3, ::Class_1_1294FEF8E985635C* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsPostService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::Class_1_1294FEF8E985635C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Init(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_INIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostViewModel*>* CreateShowPostViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CREATESHOWPOSTVIEWMODELS_OFFSET))(this);
		}

		::System::Void AddPost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_ADDPOST_OFFSET))(this, a1);
		}

		::System::Void ChangePostState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CHANGEPOSTSTATE_OFFSET))(this, a1);
		}

		::System::Void RemovePostLocalChangeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REMOVEPOSTLOCALCHANGESTATE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostViewModel* RefreshPost(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOST_OFFSET))(this, a1);
		}

		::System::Void RefreshPosts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOSTS_OFFSET))(this);
		}

		::System::Void TryOpenPostDetail(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYOPENPOSTDETAIL_OFFSET))(this, a1);
		}

		::System::Void MarkViewSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_MARKVIEWSEEN_OFFSET))(this);
		}

		::System::UInt32 GetCanSubmitPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETCANSUBMITPOSTCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetNewPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETNEWPOSTCOUNT_OFFSET))(this);
		}

		::System::Void ClearNewPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CLEARNEWPOST_OFFSET))(this);
		}

		::System::Void TryClearNewPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYCLEARNEWPOST_OFFSET))(this);
		}

		::System::Boolean get_IsShowFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GET_ISSHOWFILTER_OFFSET))(this);
		}

		::System::Int32 _CreateShowPostViewModels_b__2_0(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
