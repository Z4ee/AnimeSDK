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

#define CLASS_1_4C7B8542D6DC5824_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A641910)
#define CLASS_1_4C7B8542D6DC5824_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6412B0)
#define CLASS_1_4C7B8542D6DC5824_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6414C0)
#define CLASS_1_4C7B8542D6DC5824_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6413D0)
#define CLASS_1_4C7B8542D6DC5824_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6415A0)
#define CLASS_1_4C7B8542D6DC5824_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A641D10)
#define CLASS_1_4C7B8542D6DC5824_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A641C90)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6413B0)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A641360)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A641350)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A641130)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1A641340)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A641310)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A641320)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6413C0)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1A641330)
#define CLASS_1_4C7B8542D6DC5824_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A641300)
#define CLASS_1_4C7B8542D6DC5824_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A641190)
#define CLASS_1_4C7B8542D6DC5824_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A641720)
#define CLASS_1_4C7B8542D6DC5824_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A641780)
#define CLASS_1_4C7B8542D6DC5824_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A641E70)
#define CLASS_1_4C7B8542D6DC5824_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A641200)
#define CLASS_1_4C7B8542D6DC5824_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6411A0)

inline static constexpr unsigned int Class_1_4C7B8542D6DC5824_1_TypeDefinitionIndex = 30638;

class Class_1_4C7B8542D6DC5824_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C7B8542D6DC5824_1_TypeDefinitionIndex)->GetStaticField(0x27160);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4C7B8542D6DC5824_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4C7B8542D6DC5824_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C7B8542D6DC5824_1_TypeDefinitionIndex)->GetStaticField(0x27168);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::System::String* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::Enum_3_71AA90D596A09AC8_16 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::Enum_3_71AA90D596A09AC8_17 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4C7B8542D6DC5824_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C7B8542D6DC5824_1*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4C7B8542D6DC5824_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4C7B8542D6DC5824_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4C7B8542D6DC5824_1* Clone()
	{
		return ((::Class_1_4C7B8542D6DC5824_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_CLONE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_16 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_16))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_17 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_71AA90D596A09AC8_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_71AA90D596A09AC8_17 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4C7B8542D6DC5824_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4C7B8542D6DC5824_1*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4C7B8542D6DC5824_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C7B8542D6DC5824_1*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C7B8542D6DC5824_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
