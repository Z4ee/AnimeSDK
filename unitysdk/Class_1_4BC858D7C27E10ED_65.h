#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76FC7D9EAE4C806C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4BC858D7C27E10ED_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ABA2FF0)
#define CLASS_1_4BC858D7C27E10ED_65_CLONE_OFFSET UNITYSDK_OFFSET(0x1ABA2B40)
#define CLASS_1_4BC858D7C27E10ED_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ABA2CC0)
#define CLASS_1_4BC858D7C27E10ED_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ABA2BC0)
#define CLASS_1_4BC858D7C27E10ED_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ABA2D90)
#define CLASS_1_4BC858D7C27E10ED_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ABA3190)
#define CLASS_1_4BC858D7C27E10ED_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ABA30D0)
#define CLASS_1_4BC858D7C27E10ED_65_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1ABA2BA0)
#define CLASS_1_4BC858D7C27E10ED_65_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ABA29B0)
#define CLASS_1_4BC858D7C27E10ED_65_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ABA2B90)
#define CLASS_1_4BC858D7C27E10ED_65_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1ABA2BB0)
#define CLASS_1_4BC858D7C27E10ED_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ABA2A10)
#define CLASS_1_4BC858D7C27E10ED_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABA2EC0)
#define CLASS_1_4BC858D7C27E10ED_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ABA2F20)
#define CLASS_1_4BC858D7C27E10ED_65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABA3380)
#define CLASS_1_4BC858D7C27E10ED_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABA2A70)
#define CLASS_1_4BC858D7C27E10ED_65__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA2A20)

inline static constexpr unsigned int Class_1_4BC858D7C27E10ED_65_TypeDefinitionIndex = 33321;

class Class_1_4BC858D7C27E10ED_65 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_65_TypeDefinitionIndex)->GetStaticField(0x263D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_65*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_65_TypeDefinitionIndex)->GetStaticField(0x263D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Class_1_76FC7D9EAE4C806C* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4BC858D7C27E10ED_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_65*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_65*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_65* Clone()
	{
		return ((::Class_1_4BC858D7C27E10ED_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_76FC7D9EAE4C806C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_76FC7D9EAE4C806C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_76FC7D9EAE4C806C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4BC858D7C27E10ED_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_65*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4BC858D7C27E10ED_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_65*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
