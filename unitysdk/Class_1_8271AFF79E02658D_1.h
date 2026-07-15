#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8271AFF79E02658D_1_Enum_3_2E741879C8CDBAFC_13.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_22;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8271AFF79E02658D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7BC550)
#define CLASS_1_8271AFF79E02658D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7BC0C0)
#define CLASS_1_8271AFF79E02658D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7BC160)
#define CLASS_1_8271AFF79E02658D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7BC130)
#define CLASS_1_8271AFF79E02658D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7BC350)
#define CLASS_1_8271AFF79E02658D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C7BC750)
#define CLASS_1_8271AFF79E02658D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C7BC650)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C7BC0F0)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C7BC110)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C7BBF80)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C7BC100)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C7BC120)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C7BC0A0)
#define CLASS_1_8271AFF79E02658D_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1C7BC060)
#define CLASS_1_8271AFF79E02658D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C7BBFB0)
#define CLASS_1_8271AFF79E02658D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7BC410)
#define CLASS_1_8271AFF79E02658D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C7BC470)
#define CLASS_1_8271AFF79E02658D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7BC940)
#define CLASS_1_8271AFF79E02658D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7BBFD0)
#define CLASS_1_8271AFF79E02658D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BBFC0)

inline static constexpr unsigned int Class_1_8271AFF79E02658D_1_TypeDefinitionIndex = 29612;

class Class_1_8271AFF79E02658D_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8271AFF79E02658D_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8271AFF79E02658D_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8271AFF79E02658D_1_TypeDefinitionIndex)->GetStaticField(0x57B10);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x223; // 0x0
	::System::Object* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_8271AFF79E02658D_1_Enum_3_2E741879C8CDBAFC_13 Field_1_5; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8271AFF79E02658D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D_1*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8271AFF79E02658D_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8271AFF79E02658D_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8271AFF79E02658D_1* Clone()
	{
		return ((::Class_1_8271AFF79E02658D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_0A99AF1699F7F17E_22* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_0A99AF1699F7F17E_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0A99AF1699F7F17E_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_22*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_8271AFF79E02658D_1_Enum_3_2E741879C8CDBAFC_13 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_8271AFF79E02658D_1_Enum_3_2E741879C8CDBAFC_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8271AFF79E02658D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8271AFF79E02658D_1*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8271AFF79E02658D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D_1*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8271AFF79E02658D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
