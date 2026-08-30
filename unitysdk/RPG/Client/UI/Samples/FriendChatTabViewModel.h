#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE3CDFC0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE3CE020)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE3CE000)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE3CDFE0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_SHOWHINT_OFFSET UNITYSDK_OFFSET(0xE3CE040)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE3CDFD0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE3CE030)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE3CE010)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE3CDFF0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_SHOWHINT_OFFSET UNITYSDK_OFFSET(0xE3CE050)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CC560)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatTabViewModel_TypeDefinitionIndex = 73340;

	class FriendChatTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _IsFinished_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::String*>* _RedDotKey_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::String*>* _ImagePath_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::Boolean>* _IsLocked_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _ShowHint_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL__CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_ImagePath()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::R3::ReactiveProperty_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_RedDotKey()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Void set_RedDotKey(::R3::ReactiveProperty_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_REDDOTKEY_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsLocked()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsFinished()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_ShowHint()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_GET_SHOWHINT_OFFSET))(this);
		}

		::System::Void set_ShowHint(::R3::ReactiveProperty_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATTABVIEWMODEL_SET_SHOWHINT_OFFSET))(this, a1);
		}
	};
}
