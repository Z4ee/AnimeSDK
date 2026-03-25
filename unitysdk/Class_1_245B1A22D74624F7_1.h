#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE_3;
class Class_1_7C11C261870F1926_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_245B1A22D74624F7_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DE9140)
#define CLASS_1_245B1A22D74624F7_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17DE8CA0)
#define CLASS_1_245B1A22D74624F7_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DE8DA0)
#define CLASS_1_245B1A22D74624F7_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DE8D70)
#define CLASS_1_245B1A22D74624F7_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DE8F10)
#define CLASS_1_245B1A22D74624F7_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DE9410)
#define CLASS_1_245B1A22D74624F7_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DE92B0)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DE8D30)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17DE8D50)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17DE8CF0)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17DE8D20)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17DE8CE0)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17DE8D10)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17DE8CD0)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DE8D40)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17DE8D60)
#define CLASS_1_245B1A22D74624F7_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17DE8D00)
#define CLASS_1_245B1A22D74624F7_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DE8B80)
#define CLASS_1_245B1A22D74624F7_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DE8FE0)
#define CLASS_1_245B1A22D74624F7_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DE9040)
#define CLASS_1_245B1A22D74624F7_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DE8BA0)
#define CLASS_1_245B1A22D74624F7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE8B90)

inline static constexpr unsigned int Class_1_245B1A22D74624F7_1_TypeDefinitionIndex = 26954;

class Class_1_245B1A22D74624F7_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_7C11C261870F1926_10* Field_1_10; // 0x28
	::Class_1_3A7B270FE0BE90AE_3* Field_1_4; // 0x30
	::System::UInt32 Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_245B1A22D74624F7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_245B1A22D74624F7_1*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_245B1A22D74624F7_1* Clone()
	{
		return ((::Class_1_245B1A22D74624F7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_3A7B270FE0BE90AE_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3A7B270FE0BE90AE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3A7B270FE0BE90AE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_3*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_7C11C261870F1926_10* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7C11C261870F1926_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_7C11C261870F1926_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_10*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_245B1A22D74624F7_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_245B1A22D74624F7_1*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_245B1A22D74624F7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_245B1A22D74624F7_1*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_245B1A22D74624F7_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
