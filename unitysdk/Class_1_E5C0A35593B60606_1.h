#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E336D98DD86E4ECB_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E5C0A35593B60606_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E86000)
#define CLASS_1_E5C0A35593B60606_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E85940)
#define CLASS_1_E5C0A35593B60606_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E85B20)
#define CLASS_1_E5C0A35593B60606_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E85AC0)
#define CLASS_1_E5C0A35593B60606_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E85C50)
#define CLASS_1_E5C0A35593B60606_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E86430)
#define CLASS_1_E5C0A35593B60606_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E86300)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E85A90)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17E85A10)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17E85990)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17E85A20)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17E859A0)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E85AB0)
#define CLASS_1_E5C0A35593B60606_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E85AA0)
#define CLASS_1_E5C0A35593B60606_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E857D0)
#define CLASS_1_E5C0A35593B60606_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E85E50)
#define CLASS_1_E5C0A35593B60606_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E85EB0)
#define CLASS_1_E5C0A35593B60606_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E86610)
#define CLASS_1_E5C0A35593B60606_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E85850)
#define CLASS_1_E5C0A35593B60606_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E857E0)

inline static constexpr unsigned int Class_1_E5C0A35593B60606_1_TypeDefinitionIndex = 24981;

class Class_1_E5C0A35593B60606_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E336D98DD86E4ECB_1*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E336D98DD86E4ECB_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C0A35593B60606_1_TypeDefinitionIndex)->GetStaticField(0x26F90);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB_1*>* Field_1_9; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E5C0A35593B60606_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5C0A35593B60606_1*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E5C0A35593B60606_1* Clone()
	{
		return ((::Class_1_E5C0A35593B60606_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E5C0A35593B60606_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E5C0A35593B60606_1*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E5C0A35593B60606_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5C0A35593B60606_1*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E5C0A35593B60606_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
