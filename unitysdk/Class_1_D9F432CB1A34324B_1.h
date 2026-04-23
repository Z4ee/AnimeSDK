#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_20.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D9F432CB1A34324B_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19642F10)
#define CLASS_1_D9F432CB1A34324B_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19642AF0)
#define CLASS_1_D9F432CB1A34324B_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19642C40)
#define CLASS_1_D9F432CB1A34324B_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19642B70)
#define CLASS_1_D9F432CB1A34324B_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19642CD0)
#define CLASS_1_D9F432CB1A34324B_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196430C0)
#define CLASS_1_D9F432CB1A34324B_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19643070)
#define CLASS_1_D9F432CB1A34324B_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196429A0)
#define CLASS_1_D9F432CB1A34324B_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19642B60)
#define CLASS_1_D9F432CB1A34324B_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19642B40)
#define CLASS_1_D9F432CB1A34324B_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19642B50)
#define CLASS_1_D9F432CB1A34324B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19642A00)
#define CLASS_1_D9F432CB1A34324B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19642DD0)
#define CLASS_1_D9F432CB1A34324B_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19642E30)
#define CLASS_1_D9F432CB1A34324B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19643190)
#define CLASS_1_D9F432CB1A34324B_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19642A60)
#define CLASS_1_D9F432CB1A34324B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19642A10)

inline static constexpr unsigned int Class_1_D9F432CB1A34324B_1_TypeDefinitionIndex = 29172;

class Class_1_D9F432CB1A34324B_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F432CB1A34324B_1_TypeDefinitionIndex)->GetStaticField(0x66C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F432CB1A34324B_1_TypeDefinitionIndex)->GetStaticField(0x66C8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Enum_3_ED790DAC948A65A9_20 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D9F432CB1A34324B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D9F432CB1A34324B_1* Clone()
	{
		return ((::Class_1_D9F432CB1A34324B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_20 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_20(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_20 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_20))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D9F432CB1A34324B_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D9F432CB1A34324B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B_1*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
