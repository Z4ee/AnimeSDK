#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F7C690251CDD3A9D_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F1C100)
#define CLASS_1_F7C690251CDD3A9D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F1BC20)
#define CLASS_1_F7C690251CDD3A9D_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F1BD30)
#define CLASS_1_F7C690251CDD3A9D_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F1BCD0)
#define CLASS_1_F7C690251CDD3A9D_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F1BEA0)
#define CLASS_1_F7C690251CDD3A9D_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F1C1B0)
#define CLASS_1_F7C690251CDD3A9D_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F1C150)
#define CLASS_1_F7C690251CDD3A9D_1_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x17F1BCB0)
#define CLASS_1_F7C690251CDD3A9D_1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17F1BC90)
#define CLASS_1_F7C690251CDD3A9D_1_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17F1BCC0)
#define CLASS_1_F7C690251CDD3A9D_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17F1BCA0)
#define CLASS_1_F7C690251CDD3A9D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F1BBD0)
#define CLASS_1_F7C690251CDD3A9D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F1BFF0)
#define CLASS_1_F7C690251CDD3A9D_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F1C050)
#define CLASS_1_F7C690251CDD3A9D_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F1BBF0)
#define CLASS_1_F7C690251CDD3A9D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1BBE0)

inline static constexpr unsigned int Class_1_F7C690251CDD3A9D_1_TypeDefinitionIndex = 24496;

class Class_1_F7C690251CDD3A9D_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F7C690251CDD3A9D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_1*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F7C690251CDD3A9D_1* Clone()
	{
		return ((::Class_1_F7C690251CDD3A9D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F7C690251CDD3A9D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_1*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F7C690251CDD3A9D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_1*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
