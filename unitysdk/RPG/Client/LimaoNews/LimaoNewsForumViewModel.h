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

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_ADDPOST_OFFSET UNITYSDK_OFFSET(0x1A769100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CHANGEPOSTSTATE_OFFSET UNITYSDK_OFFSET(0x1A769430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0x1A76A140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_CREATESHOWPOSTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1A768A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETCANSUBMITPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A769D80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A769F90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_GET_ISSHOWFILTER_OFFSET UNITYSDK_OFFSET(0x1A767A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0x1A768970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_MARKVIEWSEEN_OFFSET UNITYSDK_OFFSET(0x1A767BF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOSTS_OFFSET UNITYSDK_OFFSET(0x1A768A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REFRESHPOST_OFFSET UNITYSDK_OFFSET(0x1A769AA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_REMOVEPOSTLOCALCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1A769940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL_TRYCLEARNEWPOST_OFFSET UNITYSDK_OFFSET(0x1A76A320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A76A370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A768910)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsForumViewModel_TypeDefinitionIndex = 75526;

	class LimaoNewsForumViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPostViewModel*>* PostViewModels; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x38
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::System::Boolean _HasViewSeen; // 0x48
		::System::Boolean IsMoveToNewPost; // 0x49
		::System::UInt32 _TopPostID; // 0x4C
		::System::UInt32 MoveToPostID; // 0x50
		::System::UInt32 _ForceShowPostID; // 0x54

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
