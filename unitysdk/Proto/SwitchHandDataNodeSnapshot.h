#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace System { class String; }

#define PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1935E570)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1935DF30)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1935E110)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1935E0B0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1935E220)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1935DF80)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1935E090)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1935DFE0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1935DFC0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1935DFA0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1935DDD0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1935E900)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1935E7F0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1935DE30)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1935DF90)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1935E0A0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1935DFF0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1935DFD0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1935DFB0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1935E3E0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1935E440)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1935EA80)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1935DE90)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1935DE40)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandDataNodeSnapshot_TypeDefinitionIndex = 24557;

	class SwitchHandDataNodeSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandDataNodeSnapshot_TypeDefinitionIndex)->GetStaticField(0x65EB0);
		}
		// static const ::System::Int32 ConfigIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 HandTransformFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 HandStateFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 HandParamFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GetCoinCountFieldNumber = 0x5; // 0x0
		::Proto::MotionInfoSnapshot* handTransform_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::ByteString* handParam_; // 0x20
		::System::UInt32 configId_; // 0x28
		::System::UInt32 getCoinCount_; // 0x2C
		::System::UInt32 handState_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SwitchHandDataNodeSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SwitchHandDataNodeSnapshot* Clone()
		{
			return ((::Proto::SwitchHandDataNodeSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET))(this, value);
		}

		::Proto::MotionInfoSnapshot* get_HandTransform()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_HandTransform(::Proto::MotionInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET))(this, value);
		}

		::System::UInt32 get_HandState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET))(this);
		}

		::System::Void set_HandState(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET))(this, value);
		}

		::Google::Protobuf::ByteString* get_HandParam()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET))(this);
		}

		::System::Void set_HandParam(::Google::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET))(this, value);
		}

		::System::UInt32 get_GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_GetCoinCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SwitchHandDataNodeSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SwitchHandDataNodeSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
