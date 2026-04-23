#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7DB216A3FFF6C29_1;
class Class_1_FF03248024BAA97A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CF9AE0)
#define CLASS_1_752A428518BC8100_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19CF95D0)
#define CLASS_1_752A428518BC8100_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CF97A0)
#define CLASS_1_752A428518BC8100_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CF9650)
#define CLASS_1_752A428518BC8100_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CF9890)
#define CLASS_1_752A428518BC8100_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CF9CB0)
#define CLASS_1_752A428518BC8100_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CF9BD0)
#define CLASS_1_752A428518BC8100_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19CF9620)
#define CLASS_1_752A428518BC8100_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19CF93F0)
#define CLASS_1_752A428518BC8100_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19CF9640)
#define CLASS_1_752A428518BC8100_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19CF9630)
#define CLASS_1_752A428518BC8100_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CF9450)
#define CLASS_1_752A428518BC8100_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CF99B0)
#define CLASS_1_752A428518BC8100_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CF9A10)
#define CLASS_1_752A428518BC8100_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CF9DA0)
#define CLASS_1_752A428518BC8100_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CF94B0)
#define CLASS_1_752A428518BC8100_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9460)

inline static constexpr unsigned int Class_1_752A428518BC8100_1_TypeDefinitionIndex = 26829;

class Class_1_752A428518BC8100_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FF03248024BAA97A*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FF03248024BAA97A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_1_TypeDefinitionIndex)->GetStaticField(0x67E20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_1_TypeDefinitionIndex)->GetStaticField(0x67E28);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Class_1_E7DB216A3FFF6C29_1* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_1* Clone()
	{
		return ((::Class_1_752A428518BC8100_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_CLONE_OFFSET))(this);
	}

	::Class_1_E7DB216A3FFF6C29_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7DB216A3FFF6C29_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7DB216A3FFF6C29_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FF03248024BAA97A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_1*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
