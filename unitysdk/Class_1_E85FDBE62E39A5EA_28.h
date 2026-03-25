#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6F83FEF7F18E087E_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_28_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B1E360)
#define CLASS_1_E85FDBE62E39A5EA_28_CLONE_OFFSET UNITYSDK_OFFSET(0x17B1DF90)
#define CLASS_1_E85FDBE62E39A5EA_28_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B1E0B0)
#define CLASS_1_E85FDBE62E39A5EA_28_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B1DFD0)
#define CLASS_1_E85FDBE62E39A5EA_28_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B1E160)
#define CLASS_1_E85FDBE62E39A5EA_28_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B1E4A0)
#define CLASS_1_E85FDBE62E39A5EA_28_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B1E400)
#define CLASS_1_E85FDBE62E39A5EA_28_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B1DFC0)
#define CLASS_1_E85FDBE62E39A5EA_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B1DEB0)
#define CLASS_1_E85FDBE62E39A5EA_28_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B1E250)
#define CLASS_1_E85FDBE62E39A5EA_28_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B1E2B0)
#define CLASS_1_E85FDBE62E39A5EA_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B1E550)
#define CLASS_1_E85FDBE62E39A5EA_28__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B1DF00)
#define CLASS_1_E85FDBE62E39A5EA_28__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1DEC0)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_28_TypeDefinitionIndex = 26732;

class Class_1_E85FDBE62E39A5EA_28 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6F83FEF7F18E087E_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6F83FEF7F18E087E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_28_TypeDefinitionIndex)->GetStaticField(0x352D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_28*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_28* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F83FEF7F18E087E_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_28* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_28*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_28*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_28_MERGEFROM_1_OFFSET))(this, a1);
	}
};
