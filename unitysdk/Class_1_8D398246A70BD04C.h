#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8D398246A70BD04C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC144F0)
#define CLASS_1_8D398246A70BD04C_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC13D10)
#define CLASS_1_8D398246A70BD04C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC13DF0)
#define CLASS_1_8D398246A70BD04C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC13DC0)
#define CLASS_1_8D398246A70BD04C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC140D0)
#define CLASS_1_8D398246A70BD04C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC14620)
#define CLASS_1_8D398246A70BD04C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC145B0)
#define CLASS_1_8D398246A70BD04C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC13D60)
#define CLASS_1_8D398246A70BD04C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC13C80)
#define CLASS_1_8D398246A70BD04C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC13D70)
#define CLASS_1_8D398246A70BD04C_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1CC13DB0)
#define CLASS_1_8D398246A70BD04C_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1CC13D90)
#define CLASS_1_8D398246A70BD04C_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1CC13DA0)
#define CLASS_1_8D398246A70BD04C_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1CC13D80)
#define CLASS_1_8D398246A70BD04C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC13CB0)
#define CLASS_1_8D398246A70BD04C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC14320)
#define CLASS_1_8D398246A70BD04C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC14380)
#define CLASS_1_8D398246A70BD04C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC14830)
#define CLASS_1_8D398246A70BD04C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC13CD0)
#define CLASS_1_8D398246A70BD04C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC13CC0)

inline static constexpr unsigned int Class_1_8D398246A70BD04C_TypeDefinitionIndex = 24569;

class Class_1_8D398246A70BD04C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8D398246A70BD04C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8D398246A70BD04C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D398246A70BD04C_TypeDefinitionIndex)->GetStaticField(0x27A10);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Double Field_1_5; // 0x18
	::System::Double Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8D398246A70BD04C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D398246A70BD04C*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8D398246A70BD04C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8D398246A70BD04C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8D398246A70BD04C* Clone()
	{
		return ((::Class_1_8D398246A70BD04C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8D398246A70BD04C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8D398246A70BD04C*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8D398246A70BD04C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D398246A70BD04C*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8D398246A70BD04C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
