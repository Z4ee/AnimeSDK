#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

class Class_1_6F83FEF7F18E087E_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_76F7E4E4B6E75342_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B222F0)
#define CLASS_1_76F7E4E4B6E75342_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17B21E10)
#define CLASS_1_76F7E4E4B6E75342_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B21F80)
#define CLASS_1_76F7E4E4B6E75342_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B21E90)
#define CLASS_1_76F7E4E4B6E75342_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B22050)
#define CLASS_1_76F7E4E4B6E75342_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B225D0)
#define CLASS_1_76F7E4E4B6E75342_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B22520)
#define CLASS_1_76F7E4E4B6E75342_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17B21E80)
#define CLASS_1_76F7E4E4B6E75342_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B21E60)
#define CLASS_1_76F7E4E4B6E75342_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B21E40)
#define CLASS_1_76F7E4E4B6E75342_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B21E50)
#define CLASS_1_76F7E4E4B6E75342_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17B21E70)
#define CLASS_1_76F7E4E4B6E75342_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B21D20)
#define CLASS_1_76F7E4E4B6E75342_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B22160)
#define CLASS_1_76F7E4E4B6E75342_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B221C0)
#define CLASS_1_76F7E4E4B6E75342_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B226A0)
#define CLASS_1_76F7E4E4B6E75342_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B21D70)
#define CLASS_1_76F7E4E4B6E75342_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B21D30)

inline static constexpr unsigned int Class_1_76F7E4E4B6E75342_1_TypeDefinitionIndex = 26729;

class Class_1_76F7E4E4B6E75342_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6F83FEF7F18E087E_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6F83FEF7F18E087E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76F7E4E4B6E75342_1_TypeDefinitionIndex)->GetStaticField(0x356A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_96F6662CA3713095_25 Field_1_5; // 0x20
	::System::UInt64 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_76F7E4E4B6E75342_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76F7E4E4B6E75342_1*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_76F7E4E4B6E75342_1* Clone()
	{
		return ((::Class_1_76F7E4E4B6E75342_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_76F7E4E4B6E75342_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_76F7E4E4B6E75342_1*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_76F7E4E4B6E75342_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76F7E4E4B6E75342_1*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76F7E4E4B6E75342_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
