#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_7.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E37AC0)
#define CLASS_1_4DC6841D62972C54_10_CLONE_OFFSET UNITYSDK_OFFSET(0x17E378B0)
#define CLASS_1_4DC6841D62972C54_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E37970)
#define CLASS_1_4DC6841D62972C54_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E37910)
#define CLASS_1_4DC6841D62972C54_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E379C0)
#define CLASS_1_4DC6841D62972C54_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E37BC0)
#define CLASS_1_4DC6841D62972C54_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E37B90)
#define CLASS_1_4DC6841D62972C54_10_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17E37900)
#define CLASS_1_4DC6841D62972C54_10_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E378F0)
#define CLASS_1_4DC6841D62972C54_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E37860)
#define CLASS_1_4DC6841D62972C54_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E379F0)
#define CLASS_1_4DC6841D62972C54_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E37A50)
#define CLASS_1_4DC6841D62972C54_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E37880)
#define CLASS_1_4DC6841D62972C54_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17E37870)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_10_TypeDefinitionIndex = 24392;

class Class_1_4DC6841D62972C54_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_4608E37A1B3D374A_7 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_10*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_10* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_7))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_10*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_10*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
