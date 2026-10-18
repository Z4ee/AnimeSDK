#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsCommentAnimationFlag.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_613964DFF2DC5789;
class Class_1_B155820824EA1523;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_ADDSUBCOMMENT_OFFSET UNITYSDK_OFFSET(0xD39ABD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xD39A6B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD399EA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD39B050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD39B070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xD399910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTDESC_OFFSET UNITYSDK_OFFSET(0xD398840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTICON_OFFSET UNITYSDK_OFFSET(0xD398800)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD398CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTNAME_OFFSET UNITYSDK_OFFSET(0xD39AF70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISBANNED_OFFSET UNITYSDK_OFFSET(0xD39A9B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISOFFICIALUSER_OFFSET UNITYSDK_OFFSET(0xD39AFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_STATEID_OFFSET UNITYSDK_OFFSET(0xD39AFB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_SUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD39B030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_REFRESHCANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD39ACF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_RESETANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD39AB80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETANIMATIONFLAGFADEIN_OFFSET UNITYSDK_OFFSET(0xD399E10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETCOMMENTSTATE_OFFSET UNITYSDK_OFFSET(0xD39A730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD39B060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD39B080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xD39AB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTDESC_OFFSET UNITYSDK_OFFSET(0xD39A590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTICON_OFFSET UNITYSDK_OFFSET(0xD39A470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD39A3E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTNAME_OFFSET UNITYSDK_OFFSET(0xD39A500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISBANNED_OFFSET UNITYSDK_OFFSET(0xD39AA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISOFFICIALUSER_OFFSET UNITYSDK_OFFSET(0xD39A620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_STATEID_OFFSET UNITYSDK_OFFSET(0xD39A9F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_SUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD39B040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD39A3C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentViewModel_TypeDefinitionIndex = 80415;

	class LimaoNewsCommentViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* _CommentDesc; // 0x20
		::System::String* _CommentIcon; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _CanShowSubComments_k__BackingField; // 0x30
		::System::String* _CommentName; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _SubComments_k__BackingField; // 0x40
		::System::UInt32 _StateID; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag _AnimationFlag_k__BackingField; // 0x4C
		::System::Boolean _IsBanned; // 0x50
		::System::Boolean _IsOfficialUser; // 0x51
		::System::Boolean _CanShow; // 0x52
		::System::UInt32 _CommentID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* Create(::Class_1_613964DFF2DC5789* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::Class_1_613964DFF2DC5789*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* CreateWithState(::Class_1_613964DFF2DC5789* a1, ::Class_1_B155820824EA1523* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::Class_1_613964DFF2DC5789*, ::Class_1_B155820824EA1523*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATEWITHSTATE_OFFSET))(a1, a2);
		}

		::System::Void SetCommentState(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETCOMMENTSTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetAnimationFlagFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETANIMATIONFLAGFADEIN_OFFSET))(this);
		}

		::System::Void ResetAnimationFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_RESETANIMATIONFLAG_OFFSET))(this);
		}

		::System::Void AddSubComment(::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_ADDSUBCOMMENT_OFFSET))(this, a1);
		}

		::System::Void RefreshCanShowSubComments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_REFRESHCANSHOWSUBCOMMENTS_OFFSET))(this);
		}

		::System::UInt32 get_CommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTID_OFFSET))(this);
		}

		::System::Void set_CommentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTID_OFFSET))(this, a1);
		}

		::System::String* get_CommentIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTICON_OFFSET))(this);
		}

		::System::Void set_CommentIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTICON_OFFSET))(this, a1);
		}

		::System::String* get_CommentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTNAME_OFFSET))(this);
		}

		::System::Void set_CommentName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_CommentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTDESC_OFFSET))(this);
		}

		::System::Void set_CommentDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_StateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_STATEID_OFFSET))(this);
		}

		::System::Void set_StateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_STATEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISBANNED_OFFSET))(this);
		}

		::System::Void set_IsBanned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISBANNED_OFFSET))(this, a1);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOW_OFFSET))(this);
		}

		::System::Void set_CanShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOfficialUser()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISOFFICIALUSER_OFFSET))(this);
		}

		::System::Void set_IsOfficialUser(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISOFFICIALUSER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* get_SubComments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_SUBCOMMENTS_OFFSET))(this);
		}

		::System::Void set_SubComments(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_SUBCOMMENTS_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag get_AnimationFlag()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ANIMATIONFLAG_OFFSET))(this);
		}

		::System::Void set_AnimationFlag(::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ANIMATIONFLAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* get_CanShowSubComments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOWSUBCOMMENTS_OFFSET))(this);
		}

		::System::Void set_CanShowSubComments(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOWSUBCOMMENTS_OFFSET))(this, a1);
		}
	};
}
