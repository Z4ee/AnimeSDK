#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xD48ED40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_HINTICONPATH_OFFSET UNITYSDK_OFFSET(0xD48E930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD48E8F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_POSTID_OFFSET UNITYSDK_OFFSET(0xD48ED00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_HINTICONPATH_OFFSET UNITYSDK_OFFSET(0xD48EC20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD48EBB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_POSTID_OFFSET UNITYSDK_OFFSET(0xD48EC90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD48E9F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL__GOTOPOST_OFFSET UNITYSDK_OFFSET(0xD48ED80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD48F130)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorItemViewModel_TypeDefinitionIndex = 79149;

	class LimaoNewsSponsorItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* _HintIconPath; // 0x20
		::System::String* _IconPath; // 0x28
		::Sofa::Core::SimpleCommand* _ClickCommand; // 0x30
		::System::UInt32 _PostID; // 0x38

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_HintIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_HINTICONPATH_OFFSET))(this);
		}

		::System::Void set_HintIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_HINTICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_PostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_POSTID_OFFSET))(this);
		}

		::System::Void set_PostID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_SET_POSTID_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL_GET_CLICKCOMMAND_OFFSET))(this);
		}

		::System::Void _GotoPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL__GOTOPOST_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
