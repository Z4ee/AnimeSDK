#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_35.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C9550)
#define CLASS_1_4DC6841D62972C54_21_CLONE_OFFSET UNITYSDK_OFFSET(0x181C92D0)
#define CLASS_1_4DC6841D62972C54_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C9400)
#define CLASS_1_4DC6841D62972C54_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C9360)
#define CLASS_1_4DC6841D62972C54_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C9450)
#define CLASS_1_4DC6841D62972C54_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181C9650)
#define CLASS_1_4DC6841D62972C54_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C9620)
#define CLASS_1_4DC6841D62972C54_21_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x181C9350)
#define CLASS_1_4DC6841D62972C54_21_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x181C9340)
#define CLASS_1_4DC6841D62972C54_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C9280)
#define CLASS_1_4DC6841D62972C54_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C9480)
#define CLASS_1_4DC6841D62972C54_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C94E0)
#define CLASS_1_4DC6841D62972C54_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C92A0)
#define CLASS_1_4DC6841D62972C54_21__CTOR_OFFSET UNITYSDK_OFFSET(0x181C9290)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_21_TypeDefinitionIndex = 27267;

class Class_1_4DC6841D62972C54_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_4608E37A1B3D374A_35 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_21* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_35 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_35(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_35 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_35))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_21*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
