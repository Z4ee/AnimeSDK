#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsCommentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x19508840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GETCANSHOWCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x19508CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19509560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19509580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x195089A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SETCOMMENTFADEIN_OFFSET UNITYSDK_OFFSET(0x19509480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x19508A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19509570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19509590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19508910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__FINDCOMMENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19509080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__REFRESHSHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19508AA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentListViewModel_TypeDefinitionIndex = 79090;

	class LimaoNewsCommentListViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _ShowCommentViewModels_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _AllCommentViewModels_k__BackingField; // 0x30
		::System::UInt32 _CacheCommentID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* Create()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void RefreshViewModel(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_REFRESHVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetCanShowCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GETCANSHOWCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Void SetCommentToNextState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SETCOMMENTTONEXTSTATE_OFFSET))(this, a1);
		}

		::System::Void SetCommentFadeIn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SETCOMMENTFADEIN_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* _FindCommentViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__FINDCOMMENTVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshShowCommentViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL__REFRESHSHOWCOMMENTVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* get_AllCommentViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GET_ALLCOMMENTVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_AllCommentViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SET_ALLCOMMENTVIEWMODELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* get_ShowCommentViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_GET_SHOWCOMMENTVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_ShowCommentViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTVIEWMODEL_SET_SHOWCOMMENTVIEWMODELS_OFFSET))(this, a1);
		}
	};
}
