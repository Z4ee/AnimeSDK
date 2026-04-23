#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F921FE7B01E8EB;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xA7692E0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA7691E0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA7692C0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET UNITYSDK_OFFSET(0xA7692A0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA7692F0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPLAYERREPLY_OFFSET UNITYSDK_OFFSET(0xA769220)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET UNITYSDK_OFFSET(0xA769200)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA7691C0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xA769240)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_SYSTEMTEXT_OFFSET UNITYSDK_OFFSET(0xA769260)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET UNITYSDK_OFFSET(0xA769280)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA7691F0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA7692D0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISIMAGE_OFFSET UNITYSDK_OFFSET(0xA7692B0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISPLAYERREPLY_OFFSET UNITYSDK_OFFSET(0xA769230)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISSYSTEM_OFFSET UNITYSDK_OFFSET(0xA769210)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA7691D0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xA769250)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_SYSTEMTEXT_OFFSET UNITYSDK_OFFSET(0xA769270)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET UNITYSDK_OFFSET(0xA769290)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA768D50)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsMessageItemViewModel_TypeDefinitionIndex = 68393;

	class LimaoNewsMessageItemViewModel : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks; // 0x18
		::System::String* _SystemText_k__BackingField; // 0x20
		::System::String* _ImagePath_k__BackingField; // 0x28
		::System::String* _OptionText_k__BackingField; // 0x30
		::System::String* _Name_k__BackingField; // 0x38
		::System::Single _WriteTime_k__BackingField; // 0x40
		::System::Boolean _IsPlayerReply_k__BackingField; // 0x44
		::System::Boolean _IsImage_k__BackingField; // 0x45
		::System::Boolean _IsSystem_k__BackingField; // 0x46

		::System::Void _ctor(::Class_1_36F921FE7B01E8EB* messageItemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F921FE7B01E8EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET))(this, messageItemData);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsSystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET))(this);
		}

		::System::Void set_IsSystem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISSYSTEM_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayerReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPLAYERREPLY_OFFSET))(this);
		}

		::System::Void set_IsPlayerReply(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISPLAYERREPLY_OFFSET))(this, value);
		}

		::System::String* get_OptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_OPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_OptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_OPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_SystemText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_SYSTEMTEXT_OFFSET))(this);
		}

		::System::Void set_SystemText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_SYSTEMTEXT_OFFSET))(this, value);
		}

		::System::Single get_WriteTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET))(this);
		}

		::System::Void set_WriteTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET))(this);
		}

		::System::Void set_IsImage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISIMAGE_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET))(this);
		}
	};
}
