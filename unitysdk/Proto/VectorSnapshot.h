#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_VECTORSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D2F4C50)
#define PROTO_VECTORSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1D2F47E0)
#define PROTO_VECTORSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D2F4940)
#define PROTO_VECTORSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2F48C0)
#define PROTO_VECTORSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2F4A10)
#define PROTO_VECTORSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D2F4720)
#define PROTO_VECTORSNAPSHOT_GET_X_OFFSET UNITYSDK_OFFSET(0x1D2F4860)
#define PROTO_VECTORSNAPSHOT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D2F4880)
#define PROTO_VECTORSNAPSHOT_GET_Z_OFFSET UNITYSDK_OFFSET(0x1D2F48A0)
#define PROTO_VECTORSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D2F4E50)
#define PROTO_VECTORSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D2F4E00)
#define PROTO_VECTORSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4780)
#define PROTO_VECTORSNAPSHOT_SET_X_OFFSET UNITYSDK_OFFSET(0x1D2F4870)
#define PROTO_VECTORSNAPSHOT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D2F4890)
#define PROTO_VECTORSNAPSHOT_SET_Z_OFFSET UNITYSDK_OFFSET(0x1D2F48B0)
#define PROTO_VECTORSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2F4A40)
#define PROTO_VECTORSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D2F4AA0)
#define PROTO_VECTORSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F5010)
#define PROTO_VECTORSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2F47A0)
#define PROTO_VECTORSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4790)

namespace Proto
{
	inline static constexpr unsigned int VectorSnapshot_TypeDefinitionIndex = 24881;

	class VectorSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::VectorSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::VectorSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(VectorSnapshot_TypeDefinitionIndex)->GetStaticField(0x910);
		}
		// static const ::System::Int32 XFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 YFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ZFieldNumber = 0x3; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 z_; // 0x18
		::System::Int32 y_; // 0x1C
		::System::Int32 x_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::VectorSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::VectorSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::VectorSnapshot* Clone()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_Y_OFFSET))(this, a1);
		}

		::System::Int32 get_Z()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_SET_Z_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::VectorSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::VectorSnapshot*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
