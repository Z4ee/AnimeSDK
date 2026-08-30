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

#define RPG_CLIENT_MESSAGEITEMDATA_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xD6A89E0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CANBEREPLIED_OFFSET UNITYSDK_OFFSET(0xD6A8B90)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CANBESENT_OFFSET UNITYSDK_OFFSET(0xD6A8B30)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xD6A8990)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_FINISHACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xD6A91F0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_GROUPCONTACTID_OFFSET UNITYSDK_OFFSET(0xD6A8AB0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xD6A8950)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0xD6A8AD0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD6A8930)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xD6A89A0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYHERO_OFFSET UNITYSDK_OFFSET(0xD6A8C50)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ISSENTBYPLAYER_OFFSET UNITYSDK_OFFSET(0xD6A8BF0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_MAINTEXT_OFFSET UNITYSDK_OFFSET(0xD6A89F0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_MUSTFINISH_OFFSET UNITYSDK_OFFSET(0xD6A8CC0)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0xD6A8D70)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD6A8970)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xD6A8D20)
#define RPG_CLIENT_MESSAGEITEMDATA_GET_SENDERCONTACTID_OFFSET UNITYSDK_OFFSET(0xD6A8A90)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_GROUPCONTACTID_OFFSET UNITYSDK_OFFSET(0xD6A8AC0)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xD6A8960)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD6A8940)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xD6A8980)
#define RPG_CLIENT_MESSAGEITEMDATA_SET_SENDERCONTACTID_OFFSET UNITYSDK_OFFSET(0xD6A8AA0)
#define RPG_CLIENT_MESSAGEITEMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6A9200)
#define RPG_CLIENT_MESSAGEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A8770)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageItemData_TypeDefinitionIndex = 66119;

	class MessageItemData : public ::System::Object
	{
	public:
		static ::RPG::Client::MessageItemData** StaticGet_MessageLost()
		{
			return (::RPG::Client::MessageItemData**)Il2CppClass::FromTypeDefinitionIndex(MessageItemData_TypeDefinitionIndex)->GetStaticField(0x25B60);
		}
		::RPG::GameCore::MessageItemRow* _Row_k__BackingField; // 0x10
		::RPG::Client::MessageContentBlock* _ContentBlock_k__BackingField; // 0x18
		::RPG::GameCore::MessageItemTextOverrideRow* _OverrideTextRow; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x34
		::RPG::GameCore::MessageSpecialChangeType _FinishActionType_k__BackingField; // 0x38
		::System::UInt32 _GroupContactID_k__BackingField; // 0x3C
		::System::UInt32 _SenderContactID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MessageItemRow* get_Row()
		{
			return ((::RPG::GameCore::MessageItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_ROW_OFFSET))(this, a1);
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

		::System::Void set_SenderContactID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_SENDERCONTACTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_GET_GROUPCONTACTID_OFFSET))(this);
		}

		::System::Void set_GroupContactID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEITEMDATA_SET_GROUPCONTACTID_OFFSET))(this, a1);
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
