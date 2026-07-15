#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_19.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FACB7CC2C70716F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9989E0)
#define CLASS_1_5FACB7CC2C70716F_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9984C0)
#define CLASS_1_5FACB7CC2C70716F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C998600)
#define CLASS_1_5FACB7CC2C70716F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C998560)
#define CLASS_1_5FACB7CC2C70716F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C998700)
#define CLASS_1_5FACB7CC2C70716F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C998C00)
#define CLASS_1_5FACB7CC2C70716F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C998BA0)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C998510)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C998360)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C998550)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C998530)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C998520)
#define CLASS_1_5FACB7CC2C70716F_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C998540)
#define CLASS_1_5FACB7CC2C70716F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9983C0)
#define CLASS_1_5FACB7CC2C70716F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C998800)
#define CLASS_1_5FACB7CC2C70716F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C998860)
#define CLASS_1_5FACB7CC2C70716F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C998CE0)
#define CLASS_1_5FACB7CC2C70716F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C998420)
#define CLASS_1_5FACB7CC2C70716F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9983D0)

inline static constexpr unsigned int Class_1_5FACB7CC2C70716F_TypeDefinitionIndex = 28068;

class Class_1_5FACB7CC2C70716F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FACB7CC2C70716F_TypeDefinitionIndex)->GetStaticField(0xCBC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FACB7CC2C70716F_TypeDefinitionIndex)->GetStaticField(0xCBC8);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Enum_3_4608E37A1B3D374A_19 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FACB7CC2C70716F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FACB7CC2C70716F*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5FACB7CC2C70716F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FACB7CC2C70716F* Clone()
	{
		return ((::Class_1_5FACB7CC2C70716F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_19 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_19(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_19 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_19))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FACB7CC2C70716F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FACB7CC2C70716F*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FACB7CC2C70716F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FACB7CC2C70716F*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FACB7CC2C70716F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
