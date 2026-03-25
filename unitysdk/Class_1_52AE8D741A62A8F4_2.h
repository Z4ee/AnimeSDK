#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C66F08F6BAF5805C_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_52AE8D741A62A8F4_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E8C840)
#define CLASS_1_52AE8D741A62A8F4_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17E8C4A0)
#define CLASS_1_52AE8D741A62A8F4_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E8C610)
#define CLASS_1_52AE8D741A62A8F4_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E8C500)
#define CLASS_1_52AE8D741A62A8F4_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E8C6C0)
#define CLASS_1_52AE8D741A62A8F4_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E8C950)
#define CLASS_1_52AE8D741A62A8F4_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E8C8E0)
#define CLASS_1_52AE8D741A62A8F4_2_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x17E8C4F0)
#define CLASS_1_52AE8D741A62A8F4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E8C390)
#define CLASS_1_52AE8D741A62A8F4_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E8C730)
#define CLASS_1_52AE8D741A62A8F4_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E8C790)
#define CLASS_1_52AE8D741A62A8F4_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E8CA30)
#define CLASS_1_52AE8D741A62A8F4_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E8C3F0)
#define CLASS_1_52AE8D741A62A8F4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8C3A0)

inline static constexpr unsigned int Class_1_52AE8D741A62A8F4_2_TypeDefinitionIndex = 27192;

class Class_1_52AE8D741A62A8F4_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_C66F08F6BAF5805C_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_C66F08F6BAF5805C_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52AE8D741A62A8F4_2_TypeDefinitionIndex)->GetStaticField(0x276E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C66F08F6BAF5805C_5*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_52AE8D741A62A8F4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52AE8D741A62A8F4_2*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_52AE8D741A62A8F4_2* Clone()
	{
		return ((::Class_1_52AE8D741A62A8F4_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C66F08F6BAF5805C_5*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C66F08F6BAF5805C_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_52AE8D741A62A8F4_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52AE8D741A62A8F4_2*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_52AE8D741A62A8F4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52AE8D741A62A8F4_2*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_52AE8D741A62A8F4_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
