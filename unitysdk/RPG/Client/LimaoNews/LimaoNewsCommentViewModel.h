#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsCommentAnimationFlag.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_070B5D490CF27458;
class Class_1_1B63904EB56305F5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_ADDSUBCOMMENT_OFFSET UNITYSDK_OFFSET(0xD44C740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xD44C2B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD44BC40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD44CB60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD44CB80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xD44B6E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTDESC_OFFSET UNITYSDK_OFFSET(0xD44A740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTICON_OFFSET UNITYSDK_OFFSET(0xD44A700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD44AB70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_COMMENTNAME_OFFSET UNITYSDK_OFFSET(0xD44CA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISBANNED_OFFSET UNITYSDK_OFFSET(0xD44C560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_ISOFFICIALUSER_OFFSET UNITYSDK_OFFSET(0xD44CB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_STATEID_OFFSET UNITYSDK_OFFSET(0xD44CAC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_GET_SUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD44CB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_REFRESHCANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD44C830)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_RESETANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD44C6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETANIMATIONFLAGFADEIN_OFFSET UNITYSDK_OFFSET(0xD44BBB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SETCOMMENTSTATE_OFFSET UNITYSDK_OFFSET(0xD44C330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ANIMATIONFLAG_OFFSET UNITYSDK_OFFSET(0xD44CB70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOWSUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD44CB90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xD44C680)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTDESC_OFFSET UNITYSDK_OFFSET(0xD44C1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTICON_OFFSET UNITYSDK_OFFSET(0xD44C0F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTID_OFFSET UNITYSDK_OFFSET(0xD44C080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_COMMENTNAME_OFFSET UNITYSDK_OFFSET(0xD44C160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISBANNED_OFFSET UNITYSDK_OFFSET(0xD44C610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_ISOFFICIALUSER_OFFSET UNITYSDK_OFFSET(0xD44C240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_STATEID_OFFSET UNITYSDK_OFFSET(0xD44C5A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_SET_SUBCOMMENTS_OFFSET UNITYSDK_OFFSET(0xD44CB50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD44C060)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentViewModel_TypeDefinitionIndex = 79093;

	class LimaoNewsCommentViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _CanShowSubComments_k__BackingField; // 0x20
		::System::String* _CommentIcon; // 0x28
		::System::String* _CommentName; // 0x30
		::System::String* _CommentDesc; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*>* _SubComments_k__BackingField; // 0x40
		::System::UInt32 _CommentID; // 0x48
		::System::UInt32 _StateID; // 0x4C
		::RPG::Client::LimaoNews::LimaoNewsCommentAnimationFlag _AnimationFlag_k__BackingField; // 0x50
		::System::Boolean _IsOfficialUser; // 0x54
		::System::Boolean _IsBanned; // 0x55
		::System::Boolean _CanShow; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* Create(::Class_1_070B5D490CF27458* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::Class_1_070B5D490CF27458*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsCommentViewModel* CreateWithState(::Class_1_070B5D490CF27458* a1, ::Class_1_1B63904EB56305F5* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsCommentViewModel*(*)(::Class_1_070B5D490CF27458*, ::Class_1_1B63904EB56305F5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTVIEWMODEL_CREATEWITHSTATE_OFFSET))(a1, a2);
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
