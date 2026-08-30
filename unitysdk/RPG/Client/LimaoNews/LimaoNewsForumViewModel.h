#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModelParam; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_ADDPOST_OFFSET UNITYSDK_OFFSET(0xD4527E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CHANGEPOSTSTATE_OFFSET UNITYSDK_OFFSET(0xD452910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0xD452FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CREATESHOWPOSTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xD452510)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETCANSUBMITPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xD452CD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0xD452E50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GET_ISSHOWFILTER_OFFSET UNITYSDK_OFFSET(0xD453180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xD452420)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_MARKVIEWSEEN_OFFSET UNITYSDK_OFFSET(0xD4511D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOSTS_OFFSET UNITYSDK_OFFSET(0xD4524C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOST_OFFSET UNITYSDK_OFFSET(0xD452B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xD452AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYCLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0xD453130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYOPENPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xD451B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD453290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4523C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsForumViewModel_TypeDefinitionIndex = 79136;

	class LimaoNewsForumViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostViewModel*>* PostViewModels; // 0x38
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::System::UInt32 _ForceShowPostID; // 0x48
		::System::UInt32 OpenPostDetailID; // 0x4C
		::System::Boolean IsMoveToNewPost; // 0x50
		::System::Boolean _HasViewSeen; // 0x51
		::System::UInt32 MoveToPostID; // 0x54
		::System::UInt32 _TopPostID; // 0x58

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1, ::RPG::Client::LimaoNews::LimaoNewsPostService* a2, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a3, ::Class_1_5F4D64A4B97E38F9* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsPostService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::Class_1_5F4D64A4B97E38F9*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
