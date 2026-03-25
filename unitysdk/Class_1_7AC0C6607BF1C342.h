#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B10AA9F261A5EB79;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7AC0C6607BF1C342_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C396F0)
#define CLASS_1_7AC0C6607BF1C342_CLONE_OFFSET UNITYSDK_OFFSET(0x17C390F0)
#define CLASS_1_7AC0C6607BF1C342_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C39230)
#define CLASS_1_7AC0C6607BF1C342_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C39200)
#define CLASS_1_7AC0C6607BF1C342_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C39350)
#define CLASS_1_7AC0C6607BF1C342_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C39A00)
#define CLASS_1_7AC0C6607BF1C342_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C398E0)
#define CLASS_1_7AC0C6607BF1C342_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C391E0)
#define CLASS_1_7AC0C6607BF1C342_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17C39120)
#define CLASS_1_7AC0C6607BF1C342_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C391D0)
#define CLASS_1_7AC0C6607BF1C342_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C391F0)
#define CLASS_1_7AC0C6607BF1C342_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17C39130)
#define CLASS_1_7AC0C6607BF1C342_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C38F70)
#define CLASS_1_7AC0C6607BF1C342_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C39540)
#define CLASS_1_7AC0C6607BF1C342_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C395A0)
#define CLASS_1_7AC0C6607BF1C342__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C39B90)
#define CLASS_1_7AC0C6607BF1C342__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C38FF0)
#define CLASS_1_7AC0C6607BF1C342__CTOR_OFFSET UNITYSDK_OFFSET(0x17C38F80)

inline static constexpr unsigned int Class_1_7AC0C6607BF1C342_TypeDefinitionIndex = 26006;

class Class_1_7AC0C6607BF1C342 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B10AA9F261A5EB79*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B10AA9F261A5EB79*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AC0C6607BF1C342_TypeDefinitionIndex)->GetStaticField(0x37620);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10AA9F261A5EB79*>* Field_1_5; // 0x10
	::Google::Protobuf::ByteString* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7AC0C6607BF1C342* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AC0C6607BF1C342*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7AC0C6607BF1C342* Clone()
	{
		return ((::Class_1_7AC0C6607BF1C342*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10AA9F261A5EB79*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10AA9F261A5EB79*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7AC0C6607BF1C342* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7AC0C6607BF1C342*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7AC0C6607BF1C342* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AC0C6607BF1C342*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7AC0C6607BF1C342_MERGEFROM_1_OFFSET))(this, a1);
	}
};
