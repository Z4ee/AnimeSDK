#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_1;
class Class_1_2135BD0826D34A80;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6238D7FF0191672E_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1800C110)
#define CLASS_1_6238D7FF0191672E_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1800BCA0)
#define CLASS_1_6238D7FF0191672E_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1800BEC0)
#define CLASS_1_6238D7FF0191672E_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1800BDC0)
#define CLASS_1_6238D7FF0191672E_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1800BFB0)
#define CLASS_1_6238D7FF0191672E_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1800C340)
#define CLASS_1_6238D7FF0191672E_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1800C220)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1800BDA0)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1800BD80)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1800BD60)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1800BDB0)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1800BD90)
#define CLASS_1_6238D7FF0191672E_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1800BD70)
#define CLASS_1_6238D7FF0191672E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1800BBD0)
#define CLASS_1_6238D7FF0191672E_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1800C010)
#define CLASS_1_6238D7FF0191672E_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1800C070)
#define CLASS_1_6238D7FF0191672E_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1800BBF0)
#define CLASS_1_6238D7FF0191672E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1800BBE0)

inline static constexpr unsigned int Class_1_6238D7FF0191672E_2_TypeDefinitionIndex = 23972;

class Class_1_6238D7FF0191672E_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Class_1_1DC52A0BEDF50632_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_2135BD0826D34A80* Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6238D7FF0191672E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6238D7FF0191672E_2* Clone()
	{
		return ((::Class_1_6238D7FF0191672E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_CLONE_OFFSET))(this);
	}

	::Class_1_1DC52A0BEDF50632_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1DC52A0BEDF50632_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1DC52A0BEDF50632_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC52A0BEDF50632_1*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_2135BD0826D34A80* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_2135BD0826D34A80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_2135BD0826D34A80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6238D7FF0191672E_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6238D7FF0191672E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6238D7FF0191672E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
