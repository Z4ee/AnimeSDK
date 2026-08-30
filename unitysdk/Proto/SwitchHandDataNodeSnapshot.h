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

#define PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D97E150)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1D97D9C0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D97DBD0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D97DB70)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D97DD10)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D97DA90)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1D97DB50)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1D97DAF0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1D97DAD0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D97DAB0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D97D860)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D97E4A0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D97E3D0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D97D8C0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D97DAA0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1D97DB60)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1D97DB00)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1D97DAE0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D97DAC0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D97DEC0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D97DF20)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D97E5D0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D97D920)
#define PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97D8D0)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandDataNodeSnapshot_TypeDefinitionIndex = 25509;

	class SwitchHandDataNodeSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandDataNodeSnapshot_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		// static const ::System::Int32 ConfigIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 HandTransformFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 HandStateFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 HandParamFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GetCoinCountFieldNumber = 0x5; // 0x0
		::Proto::MotionInfoSnapshot* handTransform_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::ByteString* handParam_; // 0x20
		::System::UInt32 getCoinCount_; // 0x28
		::System::UInt32 handState_; // 0x2C
		::System::UInt32 configId_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_ConfigId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET))(this, a1);
		}

		::Proto::MotionInfoSnapshot* get_HandTransform()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_HandTransform(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET))(this, a1);
		}

		::System::UInt32 get_HandState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET))(this);
		}

		::System::Void set_HandState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* get_HandParam()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET))(this);
		}

		::System::Void set_HandParam(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET))(this, a1);
		}

		::System::UInt32 get_GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_GetCoinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
