#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsTutorialService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0x1A78AB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1A78B740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1A78B760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1A78B6E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0x1A78B6C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0x1A78B700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A78B720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_TEXTBTNGO_OFFSET UNITYSDK_OFFSET(0x1A78AC10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SETDEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1A78ABC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0x1A78B750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_GUID_OFFSET UNITYSDK_OFFSET(0x1A78B770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1A78B6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0x1A78B6D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0x1A78B710)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A78B730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78A9E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__GOTO_OFFSET UNITYSDK_OFFSET(0x1A78B290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A78B780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A78B820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x1A78B830)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailViewModel_TypeDefinitionIndex = 75544;

	class LimaoNewsPostDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostViewModel* _PostViewModel_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsTutorialService* _LimaoNewsTutorialService; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnGo_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* _OnBtnImage_k__BackingField; // 0x38
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x48
		::System::Guid _Guid_k__BackingField; // 0x50
		::System::UInt32 _DefaultCommentID_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2, ::RPG::Client::LimaoNews::LimaoNewsTutorialService* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_CLEARREDDOT_OFFSET))(this);
		}

		::System::Void SetDefaultCommentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SETDEFAULTCOMMENTID_OFFSET))(this, a1);
		}

		::System::String* get_TextBtnGo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_TEXTBTNGO_OFFSET))(this);
		}

		::System::Void _Goto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL__GOTO_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnGo()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNGO_OFFSET))(this);
		}

		::System::Void set_OnBtnGo(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNGO_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnImage()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_ONBTNIMAGE_OFFSET))(this);
		}

		::System::Void set_OnBtnImage(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_ONBTNIMAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostViewModel* get_PostViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_POSTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PostViewModel(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_POSTVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DefaultCommentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_DEFAULTCOMMENTID_OFFSET))(this);
		}

		::System::Void set_DefaultCommentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_DEFAULTCOMMENTID_OFFSET))(this, a1);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL_SET_GUID_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}

		::System::Void __ctor_b__0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILVIEWMODEL___CTOR_B__0_2_OFFSET))(this);
		}
	};
}
