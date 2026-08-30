#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C086E47345F86771_10;
class Class_1_F29182263AEF4E21_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F0E9DD085BA6740E_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D7BF940)
#define CLASS_1_F0E9DD085BA6740E_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1D7BF490)
#define CLASS_1_F0E9DD085BA6740E_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D7BF550)
#define CLASS_1_F0E9DD085BA6740E_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7BF520)
#define CLASS_1_F0E9DD085BA6740E_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7BF6B0)
#define CLASS_1_F0E9DD085BA6740E_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D7BFC50)
#define CLASS_1_F0E9DD085BA6740E_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D7BFB40)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D7BF500)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D7BF4D0)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D7BF2D0)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1D7BF4F0)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1D7BF4C0)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D7BF510)
#define CLASS_1_F0E9DD085BA6740E_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D7BF4E0)
#define CLASS_1_F0E9DD085BA6740E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D7BF300)
#define CLASS_1_F0E9DD085BA6740E_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D7BF740)
#define CLASS_1_F0E9DD085BA6740E_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D7BF7A0)
#define CLASS_1_F0E9DD085BA6740E_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BFDA0)
#define CLASS_1_F0E9DD085BA6740E_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7BF380)
#define CLASS_1_F0E9DD085BA6740E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BF310)

inline static constexpr unsigned int Class_1_F0E9DD085BA6740E_2_TypeDefinitionIndex = 27728;

class Class_1_F0E9DD085BA6740E_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F0E9DD085BA6740E_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F0E9DD085BA6740E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E9DD085BA6740E_2_TypeDefinitionIndex)->GetStaticField(0x37AD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F29182263AEF4E21_2*>** StaticGet_ACJGDHMKKJO()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F29182263AEF4E21_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E9DD085BA6740E_2_TypeDefinitionIndex)->GetStaticField(0x37AD8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_10*>** StaticGet_FNPPMPNKFLE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E9DD085BA6740E_2_TypeDefinitionIndex)->GetStaticField(0x37AE0);
	}
	// static const ::System::Int32 GOCMFEFHEBM = 0x8; // 0x0
	// static const ::System::Int32 OICKCNEBADE = 0xF; // 0x0
	// static const ::System::Int32 LIFIJBIKBDJ = 0x1; // 0x0
	// static const ::System::Int32 HNCINKBJDIN = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_10*>* OBGIFKKJFOD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F29182263AEF4E21_2*>* LDELHDNAAHO; // 0x20
	::System::UInt32 ABGGFEAJHAH; // 0x28
	::System::UInt32 AFFBGDFNCBG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F0E9DD085BA6740E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_2*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F0E9DD085BA6740E_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F0E9DD085BA6740E_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F0E9DD085BA6740E_2* Clone()
	{
		return ((::Class_1_F0E9DD085BA6740E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_10*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F29182263AEF4E21_2*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F29182263AEF4E21_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F0E9DD085BA6740E_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_2*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F0E9DD085BA6740E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_2*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0E9DD085BA6740E_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
