#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1932A8A0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1932A460)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1932A670)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1932A5A0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1932A700)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1932A4D0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1932A4F0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1932A3A0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1932AAC0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1932AA30)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1932A400)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1932A4E0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1932A500)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1932A7B0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1932A810)
#define PROTO_ACTIVEMCVKEYSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1932ABC0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1932A420)
#define PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1932A410)

namespace Proto
{
	inline static constexpr unsigned int ActiveMCVKeySnapshot_TypeDefinitionIndex = 24524;

	class ActiveMCVKeySnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::ActiveMCVKeySnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::ActiveMCVKeySnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(ActiveMCVKeySnapshot_TypeDefinitionIndex)->GetStaticField(0x628F0);
		}
		// static const ::System::Int32 MainMissionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 McvKeyFieldNumber = 0x2; // 0x0
		::System::String* mcvKey_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::ActiveMCVKeySnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::ActiveMCVKeySnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ActiveMCVKeySnapshot* Clone()
		{
			return ((::Proto::ActiveMCVKeySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::System::String* get_McvKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET))(this);
		}

		::System::Void set_McvKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ActiveMCVKeySnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
