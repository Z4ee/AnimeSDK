#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_16.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_17.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FACB7CC2C70716F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6272C0)
#define CLASS_1_5FACB7CC2C70716F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A626E10)
#define CLASS_1_5FACB7CC2C70716F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A626F80)
#define CLASS_1_5FACB7CC2C70716F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A626EB0)
#define CLASS_1_5FACB7CC2C70716F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A627020)
#define CLASS_1_5FACB7CC2C70716F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A627520)
#define CLASS_1_5FACB7CC2C70716F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6274C0)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A626CC0)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1A626E90)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A626E70)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A626EA0)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1A626E80)
#define CLASS_1_5FACB7CC2C70716F_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A626E60)
#define CLASS_1_5FACB7CC2C70716F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A626D20)
#define CLASS_1_5FACB7CC2C70716F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A627120)
#define CLASS_1_5FACB7CC2C70716F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A627180)
#define CLASS_1_5FACB7CC2C70716F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A627600)
#define CLASS_1_5FACB7CC2C70716F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A626D80)
#define CLASS_1_5FACB7CC2C70716F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A626D30)

inline static constexpr unsigned int Class_1_5FACB7CC2C70716F_1_TypeDefinitionIndex = 30646;

class Class_1_5FACB7CC2C70716F_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FACB7CC2C70716F_1_TypeDefinitionIndex)->GetStaticField(0x253E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FACB7CC2C70716F_1_TypeDefinitionIndex)->GetStaticField(0x253E8);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Enum_3_71AA90D596A09AC8_17 Field_1_7; // 0x20
	::Enum_3_71AA90D596A09AC8_16 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FACB7CC2C70716F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FACB7CC2C70716F_1*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FACB7CC2C70716F_1* Clone()
	{
		return ((::Class_1_5FACB7CC2C70716F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_CLONE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_16 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_16))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_17 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_71AA90D596A09AC8_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_71AA90D596A09AC8_17 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FACB7CC2C70716F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FACB7CC2C70716F_1*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FACB7CC2C70716F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FACB7CC2C70716F_1*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
