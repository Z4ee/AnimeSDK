#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_64.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_93_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD55060)
#define CLASS_1_1CBA230307F9C289_93_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD54C20)
#define CLASS_1_1CBA230307F9C289_93_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD54DB0)
#define CLASS_1_1CBA230307F9C289_93_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD54CD0)
#define CLASS_1_1CBA230307F9C289_93_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD54E80)
#define CLASS_1_1CBA230307F9C289_93_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD55280)
#define CLASS_1_1CBA230307F9C289_93_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD55230)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CD54CB0)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD54C90)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CD54C80)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD54B90)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CD54CC0)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD54CA0)
#define CLASS_1_1CBA230307F9C289_93_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CD54C70)
#define CLASS_1_1CBA230307F9C289_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD54BC0)
#define CLASS_1_1CBA230307F9C289_93_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD54EB0)
#define CLASS_1_1CBA230307F9C289_93_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD54F10)
#define CLASS_1_1CBA230307F9C289_93__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD55420)
#define CLASS_1_1CBA230307F9C289_93__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD54BE0)
#define CLASS_1_1CBA230307F9C289_93__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD54BD0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_93_TypeDefinitionIndex = 32689;

class Class_1_1CBA230307F9C289_93 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_93*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_93*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_93_TypeDefinitionIndex)->GetStaticField(0x35780);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Enum_3_DB663931210BBC27_64 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_93*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_93*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_93*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_93* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_64 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_64))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_93* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_93*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_93*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_93_MERGEFROM_1_OFFSET))(this, a1);
	}
};
