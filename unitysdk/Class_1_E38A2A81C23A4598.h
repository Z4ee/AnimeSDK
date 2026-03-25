#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E38A2A81C23A4598_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E2D410)
#define CLASS_1_E38A2A81C23A4598_CLONE_OFFSET UNITYSDK_OFFSET(0x17E2CF90)
#define CLASS_1_E38A2A81C23A4598_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E2D0C0)
#define CLASS_1_E38A2A81C23A4598_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E2D090)
#define CLASS_1_E38A2A81C23A4598_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E2D1E0)
#define CLASS_1_E38A2A81C23A4598_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E2D5B0)
#define CLASS_1_E38A2A81C23A4598_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E2D530)
#define CLASS_1_E38A2A81C23A4598_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17E2CFF0)
#define CLASS_1_E38A2A81C23A4598_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17E2D000)
#define CLASS_1_E38A2A81C23A4598_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17E2D070)
#define CLASS_1_E38A2A81C23A4598_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17E2D080)
#define CLASS_1_E38A2A81C23A4598_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E2CF20)
#define CLASS_1_E38A2A81C23A4598_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E2D310)
#define CLASS_1_E38A2A81C23A4598_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E2D370)
#define CLASS_1_E38A2A81C23A4598__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E2CF40)
#define CLASS_1_E38A2A81C23A4598__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2CF30)

inline static constexpr unsigned int Class_1_E38A2A81C23A4598_TypeDefinitionIndex = 27041;

class Class_1_E38A2A81C23A4598 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Single Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E38A2A81C23A4598* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38A2A81C23A4598*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E38A2A81C23A4598* Clone()
	{
		return ((::Class_1_E38A2A81C23A4598*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E38A2A81C23A4598* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E38A2A81C23A4598*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E38A2A81C23A4598* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38A2A81C23A4598*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E38A2A81C23A4598_MERGEFROM_1_OFFSET))(this, a1);
	}
};
