#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_33.h"
#include "unitysdk/Enum_3_DB663931210BBC27_34.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4DC6841D62972C54_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EFEA50)
#define CLASS_1_4DC6841D62972C54_11_CLONE_OFFSET UNITYSDK_OFFSET(0x17EFE760)
#define CLASS_1_4DC6841D62972C54_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EFE8B0)
#define CLASS_1_4DC6841D62972C54_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EFE810)
#define CLASS_1_4DC6841D62972C54_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EFE910)
#define CLASS_1_4DC6841D62972C54_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EFEC20)
#define CLASS_1_4DC6841D62972C54_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EFEBE0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17EFE800)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EFE7E0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17EFE7F0)
#define CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EFE7D0)
#define CLASS_1_4DC6841D62972C54_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EFE710)
#define CLASS_1_4DC6841D62972C54_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EFE940)
#define CLASS_1_4DC6841D62972C54_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EFE9A0)
#define CLASS_1_4DC6841D62972C54_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EFE730)
#define CLASS_1_4DC6841D62972C54_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFE720)

inline static constexpr unsigned int Class_1_4DC6841D62972C54_11_TypeDefinitionIndex = 24723;

class Class_1_4DC6841D62972C54_11 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_33 Field_1_2; // 0x18
	::Enum_3_DB663931210BBC27_34 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4DC6841D62972C54_11* Clone()
	{
		return ((::Class_1_4DC6841D62972C54_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_33 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_34 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_34(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_34 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_34))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4DC6841D62972C54_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_11*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4DC6841D62972C54_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
