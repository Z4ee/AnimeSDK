#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_40.h"
#include "unitysdk/System/Object.h"

class Class_1_9237DE718F7E794D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99D87B66FA19BA63_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A4540C0)
#define CLASS_1_99D87B66FA19BA63_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A453D00)
#define CLASS_1_99D87B66FA19BA63_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A453EE0)
#define CLASS_1_99D87B66FA19BA63_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A453E00)
#define CLASS_1_99D87B66FA19BA63_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A453F90)
#define CLASS_1_99D87B66FA19BA63_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A4542D0)
#define CLASS_1_99D87B66FA19BA63_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4541D0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A453DE0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A453C00)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A453DD0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A453DF0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A453DC0)
#define CLASS_1_99D87B66FA19BA63_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A453C60)
#define CLASS_1_99D87B66FA19BA63_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A453FD0)
#define CLASS_1_99D87B66FA19BA63_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A454030)
#define CLASS_1_99D87B66FA19BA63_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4544E0)
#define CLASS_1_99D87B66FA19BA63_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A453C80)
#define CLASS_1_99D87B66FA19BA63_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A453C70)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63_6_TypeDefinitionIndex = 28202;

class Class_1_99D87B66FA19BA63_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63_6_TypeDefinitionIndex)->GetStaticField(0x664D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_9237DE718F7E794D* Field_1_4; // 0x18
	::Enum_3_DB663931210BBC27_40 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63_6* Clone()
	{
		return ((::Class_1_99D87B66FA19BA63_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_40 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_40(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_40 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_40))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_9237DE718F7E794D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9237DE718F7E794D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9237DE718F7E794D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9237DE718F7E794D*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
