#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6949CBEE02AA8B1E_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D46E80)
#define CLASS_1_C3C5C0E033C47270_6_CLONE_OFFSET UNITYSDK_OFFSET(0x17D46B10)
#define CLASS_1_C3C5C0E033C47270_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D46CD0)
#define CLASS_1_C3C5C0E033C47270_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D46C00)
#define CLASS_1_C3C5C0E033C47270_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D46D70)
#define CLASS_1_C3C5C0E033C47270_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D46FB0)
#define CLASS_1_C3C5C0E033C47270_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D46EE0)
#define CLASS_1_C3C5C0E033C47270_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D46BE0)
#define CLASS_1_C3C5C0E033C47270_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D46BF0)
#define CLASS_1_C3C5C0E033C47270_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D46A60)
#define CLASS_1_C3C5C0E033C47270_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D46DC0)
#define CLASS_1_C3C5C0E033C47270_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D46E20)
#define CLASS_1_C3C5C0E033C47270_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D46A80)
#define CLASS_1_C3C5C0E033C47270_6__CTOR_OFFSET UNITYSDK_OFFSET(0x17D46A70)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_6_TypeDefinitionIndex = 24341;

class Class_1_C3C5C0E033C47270_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Class_1_6949CBEE02AA8B1E_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_6*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_6* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_CLONE_OFFSET))(this);
	}

	::Class_1_6949CBEE02AA8B1E_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6949CBEE02AA8B1E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6949CBEE02AA8B1E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E_1*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_6*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_6*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
