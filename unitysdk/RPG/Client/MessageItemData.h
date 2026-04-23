#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageSpecialChangeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentBlock; }
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { class MessageItemTextOverrideRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEITEMDATA_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xA890190)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CANBEREPLIED_OFFSET UNITYSDK_OFFSET(0xA890340)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CANBESENT_OFFSET UNITYSDK_OFFSET(0xA8902E0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xA890170)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_FINISHACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA890A30)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_GROUPCONTACTID_OFFSET UNITYSDK_OFFSET(0xA890260)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA890130)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0xA890280)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA890110)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA890180)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYHERO_OFFSET UNITYSDK_OFFSET(0xA8904B0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYPLAYER_OFFSET UNITYSDK_OFFSET(0xA890450)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_MAINTEXT_OFFSET UNITYSDK_OFFSET(0xA8901A0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_MUSTFINISH_OFFSET UNITYSDK_OFFSET(0xA890520)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0xA8905A0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA890150)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA890580)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_SENDERCONTACTID_OFFSET UNITYSDK_OFFSET(0xA890240)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_GROUPCONTACTID_OFFSET UNITYSDK_OFFSET(0xA890270)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA890140)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA890120)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA890160)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_SENDERCONTACTID_OFFSET UNITYSDK_OFFSET(0xA890250)
#define RPG_CLIENT_MESSAGEITEMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA890A40)
#define RPG_CLIENT_MESSAGEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA88FF90)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageItemData_TypeDefinitionIndex = 60838;

	class MessageItemData : public ::System::Object
	{
	public:
		static ::RPG::Client::MessageItemData** StaticGet_MessageLost()
		{
			return (::RPG::Client::MessageItemData**)Il2CppClass::FromTypeDefinitionIndex(MessageItemData_TypeDefinitionIndex)->GetStaticField(0x30A90);
		}
		::RPG::GameCore::MessageItemTextOverrideRow* _OverrideTextRow; // 0x10
		::RPG::Client::MessageContentBlock* _ContentBlock_k__BackingField; // 0x18
		::RPG::GameCore::MessageItemRow* _Row_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x28
		::RPG::GameCore::MessageSpecialChangeType _FinishActionType_k__BackingField; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::UInt32 _GroupContactID_k__BackingField; // 0x3C
		::System::UInt32 _SenderContactID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 itemID, ::System::UInt32 contactID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA__CTOR_OFFSET))(this, itemID, contactID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MessageItemRow* get_Row()
		{
			return ((::RPG::GameCore::MessageItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageItemRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::MessageContentBlock* get_ContentBlock()
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_CONTENTBLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_BLOCKS_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_MAINTEXT_OFFSET))(this);
		}

		::System::UInt32 get_SenderContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_SENDERCONTACTID_OFFSET))(this);
		}

		::System::Void set_SenderContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_SENDERCONTACTID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_GROUPCONTACTID_OFFSET))(this);
		}

		::System::Void set_GroupContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_GROUPCONTACTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_CanBeSent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_CANBESENT_OFFSET))(this);
		}

		::System::Boolean get_CanBeReplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_CANBEREPLIED_OFFSET))(this);
		}

		::System::Boolean get_IsSentByPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsSentByHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYHERO_OFFSET))(this);
		}

		::System::Boolean get_MustFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_MUSTFINISH_OFFSET))(this);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::String* get_Preview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_PREVIEW_OFFSET))(this);
		}

		::RPG::GameCore::MessageSpecialChangeType get_FinishActionType()
		{
			return ((::RPG::GameCore::MessageSpecialChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_FINISHACTIONTYPE_OFFSET))(this);
		}
	};
}
