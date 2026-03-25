#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F7C690251CDD3A9D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1807C400)
#define CLASS_1_F7C690251CDD3A9D_CLONE_OFFSET UNITYSDK_OFFSET(0x1807BC60)
#define CLASS_1_F7C690251CDD3A9D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1807BDB0)
#define CLASS_1_F7C690251CDD3A9D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1807BD50)
#define CLASS_1_F7C690251CDD3A9D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1807C010)
#define CLASS_1_F7C690251CDD3A9D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1807C4F0)
#define CLASS_1_F7C690251CDD3A9D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1807C460)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1807BCF0)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1807BD10)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x1807BD30)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1807BCD0)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1807BD00)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x1807BD20)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0x1807BD40)
#define CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1807BCE0)
#define CLASS_1_F7C690251CDD3A9D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1807BC10)
#define CLASS_1_F7C690251CDD3A9D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1807C280)
#define CLASS_1_F7C690251CDD3A9D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1807C2E0)
#define CLASS_1_F7C690251CDD3A9D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1807BC30)
#define CLASS_1_F7C690251CDD3A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1807BC20)

inline static constexpr unsigned int Class_1_F7C690251CDD3A9D_TypeDefinitionIndex = 24081;

class Class_1_F7C690251CDD3A9D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Single Field_1_6; // 0x18
	::System::Single Field_1_8; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F7C690251CDD3A9D* Clone()
	{
		return ((::Class_1_F7C690251CDD3A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F7C690251CDD3A9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
