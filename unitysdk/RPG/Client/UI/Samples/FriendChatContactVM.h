#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xE3CC2B0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_ISONLINE_OFFSET UNITYSDK_OFFSET(0xE3CC2F0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE3CC310)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE3CC2D0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE3CC290)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xE3CC2C0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_ISONLINE_OFFSET UNITYSDK_OFFSET(0xE3CC300)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE3CC2E0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE3CC2A0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CC320)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatContactVM_TypeDefinitionIndex = 73346;

	class FriendChatContactVM : public ::Sofa::BaseViewModel
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _IsSelected_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::String*>* _Avatar_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::Boolean>* _IsOnline_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::Int32>* _Level_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::String*>* _Name_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM__CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_Name()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::R3::ReactiveProperty_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_NAME_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_Avatar()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::R3::ReactiveProperty_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_AVATAR_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_Level()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::R3::ReactiveProperty_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_LEVEL_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsOnline()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_ISONLINE_OFFSET))(this);
		}

		::System::Void set_IsOnline(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_SET_ISONLINE_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsSelected()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTVM_GET_ISSELECTED_OFFSET))(this);
		}
	};
}
