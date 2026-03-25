#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F7C690251CDD3A9D_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181992D0)
#define CLASS_1_F7C690251CDD3A9D_2_CLONE_OFFSET UNITYSDK_OFFSET(0x18198F80)
#define CLASS_1_F7C690251CDD3A9D_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18199040)
#define CLASS_1_F7C690251CDD3A9D_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18199010)
#define CLASS_1_F7C690251CDD3A9D_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18199130)
#define CLASS_1_F7C690251CDD3A9D_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181993E0)
#define CLASS_1_F7C690251CDD3A9D_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18199390)
#define CLASS_1_F7C690251CDD3A9D_2_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x18198FF0)
#define CLASS_1_F7C690251CDD3A9D_2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18198FE0)
#define CLASS_1_F7C690251CDD3A9D_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18198FD0)
#define CLASS_1_F7C690251CDD3A9D_2_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18199000)
#define CLASS_1_F7C690251CDD3A9D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18198F20)
#define CLASS_1_F7C690251CDD3A9D_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181991D0)
#define CLASS_1_F7C690251CDD3A9D_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x18199230)
#define CLASS_1_F7C690251CDD3A9D_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18198F40)
#define CLASS_1_F7C690251CDD3A9D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18198F30)

inline static constexpr unsigned int Class_1_F7C690251CDD3A9D_2_TypeDefinitionIndex = 26658;

class Class_1_F7C690251CDD3A9D_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Single Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F7C690251CDD3A9D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_2*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F7C690251CDD3A9D_2* Clone()
	{
		return ((::Class_1_F7C690251CDD3A9D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F7C690251CDD3A9D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_2*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F7C690251CDD3A9D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7C690251CDD3A9D_2*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F7C690251CDD3A9D_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
