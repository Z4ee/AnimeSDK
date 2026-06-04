#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsCommentListViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewContentViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewTabViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_CREATECONTENTS_OFFSET UNITYSDK_OFFSET(0xBD7F610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETMOVETOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xBD802C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETPREFABINDEXANDDATA_OFFSET UNITYSDK_OFFSET(0xBD80600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET UNITYSDK_OFFSET(0xBD80490)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBD80430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_COMMENTLISTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD80890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_CONTENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xBD80850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_CURTABINDEX_OFFSET UNITYSDK_OFFSET(0xBD802B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_GUID_OFFSET UNITYSDK_OFFSET(0xBD80930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD80870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_INTERVIEWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD80830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNCHANGETAB_OFFSET UNITYSDK_OFFSET(0xBD808D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBD808F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNUPVOTE_OFFSET UNITYSDK_OFFSET(0xBD80910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_TABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xBD808B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_ISCOMMENTPREFABINDEX_OFFSET UNITYSDK_OFFSET(0xBD807E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_REFRESHINTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD7FEB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SETDEFAULTCONTENTID_OFFSET UNITYSDK_OFFSET(0xBD7FFC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_COMMENTLISTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD808A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_CONTENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xBD80860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_CURTABINDEX_OFFSET UNITYSDK_OFFSET(0xBD80220)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_GUID_OFFSET UNITYSDK_OFFSET(0xBD80940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD80880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_INTERVIEWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD80840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNCHANGETAB_OFFSET UNITYSDK_OFFSET(0xBD808E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBD80900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNUPVOTE_OFFSET UNITYSDK_OFFSET(0xBD80920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_TABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xBD808C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7F4A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBD80950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xBD80A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0xBD80AC0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailViewModel_TypeDefinitionIndex = 73872;

	class LimaoNewsInterviewDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewTabViewModel*>* _TabViewModels_k__BackingField; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnUpvote_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* _InteractionViewModel_k__BackingField; // 0x38
		::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewContentViewModel*>* _ContentViewModels_k__BackingField; // 0x48
		::Class_1_BF01A723AB4005C0<::System::Int32>* _OnBtnChangeTab_k__BackingField; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* _CommentListViewModel_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* _InterviewViewModel_k__BackingField; // 0x60
		::System::Guid _Guid_k__BackingField; // 0x68
		::System::Int32 _CurTabIndex; // 0x78

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetDefaultContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SETDEFAULTCONTENTID_OFFSET))(this, a1);
		}

		::System::Void CreateContents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_CREATECONTENTS_OFFSET))(this);
		}

		::System::Void RefreshInteractionViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_REFRESHINTERACTIONVIEWMODEL_OFFSET))(this);
		}

		::System::Int32 get_CurTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_CURTABINDEX_OFFSET))(this);
		}

		::System::Void set_CurTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_CURTABINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetMoveToItemIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETMOVETOITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetTabItemIndexByContentItemIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETTOTALCOUNT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Object*> GetPrefabIndexAndData(::System::Int32 a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Object*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GETPREFABINDEXANDDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsCommentPrefabIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_ISCOMMENTPREFABINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* get_InterviewViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_INTERVIEWVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_InterviewViewModel(::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_INTERVIEWVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewContentViewModel*>* get_ContentViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewContentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_CONTENTVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_ContentViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewContentViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewContentViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_CONTENTVIEWMODELS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* get_InteractionViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_INTERACTIONVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_InteractionViewModel(::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInteractionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_INTERACTIONVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* get_CommentListViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_COMMENTLISTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_CommentListViewModel(::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentListViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_COMMENTLISTVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewTabViewModel*>* get_TabViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_TABVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_TabViewModels(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewTabViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewTabViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_TABVIEWMODELS_OFFSET))(this, a1);
		}

		::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnBtnChangeTab()
		{
			return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNCHANGETAB_OFFSET))(this);
		}

		::System::Void set_OnBtnChangeTab(::Class_1_BF01A723AB4005C0<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNCHANGETAB_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnUpvote()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_ONBTNUPVOTE_OFFSET))(this);
		}

		::System::Void set_OnBtnUpvote(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_ONBTNUPVOTE_OFFSET))(this, a1);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL_SET_GUID_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}

		::System::Void __ctor_b__0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___CTOR_B__0_2_OFFSET))(this);
		}
	};
}
