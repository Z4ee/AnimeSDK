#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2023A453A03A22A2;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xBD93B10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBD93A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBD93AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET UNITYSDK_OFFSET(0xBD93AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD93B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPLAYERREPLY_OFFSET UNITYSDK_OFFSET(0xBD93A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET UNITYSDK_OFFSET(0xBD93A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBD939F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xBD93A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_SYSTEMTEXT_OFFSET UNITYSDK_OFFSET(0xBD93A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET UNITYSDK_OFFSET(0xBD93AB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBD93A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBD93B00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISIMAGE_OFFSET UNITYSDK_OFFSET(0xBD93AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISPLAYERREPLY_OFFSET UNITYSDK_OFFSET(0xBD93A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISSYSTEM_OFFSET UNITYSDK_OFFSET(0xBD93A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBD93A00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xBD93A80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_SYSTEMTEXT_OFFSET UNITYSDK_OFFSET(0xBD93AA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET UNITYSDK_OFFSET(0xBD93AC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD935A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMessageItemViewModel_TypeDefinitionIndex = 73866;

	class LimaoNewsMessageItemViewModel : public ::System::Object
	{
	public:
		::System::String* _SystemText_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks; // 0x18
		::System::String* _OptionText_k__BackingField; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::System::String* _ImagePath_k__BackingField; // 0x30
		::System::String* _Name_k__BackingField; // 0x38
		::System::Boolean _IsPlayerReply_k__BackingField; // 0x40
		::System::Boolean _IsImage_k__BackingField; // 0x41
		::System::Boolean _IsSystem_k__BackingField; // 0x42
		::System::Single _WriteTime_k__BackingField; // 0x44

		::System::Void _ctor(::Class_1_2023A453A03A22A2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2023A453A03A22A2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET))(this);
		}

		::System::Void set_IsSystem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISSYSTEM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPLAYERREPLY_OFFSET))(this);
		}

		::System::Void set_IsPlayerReply(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISPLAYERREPLY_OFFSET))(this, a1);
		}

		::System::String* get_OptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_OPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_OptionText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_OPTIONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_SystemText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_SYSTEMTEXT_OFFSET))(this);
		}

		::System::Void set_SystemText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_SYSTEMTEXT_OFFSET))(this, a1);
		}

		::System::Single get_WriteTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET))(this);
		}

		::System::Void set_WriteTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET))(this);
		}

		::System::Void set_IsImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_ISIMAGE_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET))(this);
		}
	};
}
