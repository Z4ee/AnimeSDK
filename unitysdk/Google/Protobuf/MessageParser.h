#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class ExtensionRegistry; }
namespace Google::Protobuf { class IMessage; }
namespace System { template <typename T> class Func_1; }

#define GOOGLE_PROTOBUF_MESSAGEPARSER_CHECKMERGEDREQUIREDFIELDS_OFFSET UNITYSDK_OFFSET(0x1AA89310)
#define GOOGLE_PROTOBUF_MESSAGEPARSER_GET_DISCARDUNKNOWNFIELDS_OFFSET UNITYSDK_OFFSET(0x1AA892E0)
#define GOOGLE_PROTOBUF_MESSAGEPARSER_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1AA892F0)
#define GOOGLE_PROTOBUF_MESSAGEPARSER_PARSEFROM_OFFSET UNITYSDK_OFFSET(0x1AA860D0)
#define GOOGLE_PROTOBUF_MESSAGEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA89300)

namespace Google::Protobuf
{
	inline static constexpr unsigned int MessageParser_TypeDefinitionIndex = 5401;

	class MessageParser : public ::System::Object
	{
	public:
		::Google::Protobuf::ExtensionRegistry* _Extensions_k__BackingField; // 0x10
		::System::Func_1<::Google::Protobuf::IMessage*>* factory; // 0x18
		::System::Boolean _DiscardUnknownFields_k__BackingField; // 0x20

		::System::Void _ctor(::System::Func_1<::Google::Protobuf::IMessage*>* a1, ::System::Boolean a2, ::Google::Protobuf::ExtensionRegistry* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Google::Protobuf::IMessage*>*, ::System::Boolean, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEPARSER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_DiscardUnknownFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEPARSER_GET_DISCARDUNKNOWNFIELDS_OFFSET))(this);
		}

		::Google::Protobuf::ExtensionRegistry* get_Extensions()
		{
			return ((::Google::Protobuf::ExtensionRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEPARSER_GET_EXTENSIONS_OFFSET))(this);
		}

		::Google::Protobuf::IMessage* ParseFrom(::Google::Protobuf::ByteString* a1)
		{
			return ((::Google::Protobuf::IMessage*(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEPARSER_PARSEFROM_OFFSET))(this, a1);
		}

		static ::System::Void CheckMergedRequiredFields(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_MESSAGEPARSER_CHECKMERGEDREQUIREDFIELDS_OFFSET))(a1);
		}
	};
}
