#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_413;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FDFA365FE186E8F2_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8240F0)
#define CLASS_1_FDFA365FE186E8F2_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1C823A70)
#define CLASS_1_FDFA365FE186E8F2_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C823CD0)
#define CLASS_1_FDFA365FE186E8F2_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C823AF0)
#define CLASS_1_FDFA365FE186E8F2_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C823E70)
#define CLASS_1_FDFA365FE186E8F2_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8242A0)
#define CLASS_1_FDFA365FE186E8F2_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8241D0)
#define CLASS_1_FDFA365FE186E8F2_17_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C823AC0)
#define CLASS_1_FDFA365FE186E8F2_17_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8238B0)
#define CLASS_1_FDFA365FE186E8F2_17_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C823AE0)
#define CLASS_1_FDFA365FE186E8F2_17_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C823AD0)
#define CLASS_1_FDFA365FE186E8F2_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C823910)
#define CLASS_1_FDFA365FE186E8F2_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C823F90)
#define CLASS_1_FDFA365FE186E8F2_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C823FF0)
#define CLASS_1_FDFA365FE186E8F2_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C824490)
#define CLASS_1_FDFA365FE186E8F2_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C823970)
#define CLASS_1_FDFA365FE186E8F2_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1C823920)

inline static constexpr unsigned int Class_1_FDFA365FE186E8F2_17_TypeDefinitionIndex = 27895;

class Class_1_FDFA365FE186E8F2_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_17*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_17_TypeDefinitionIndex)->GetStaticField(0x23B30);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_17_TypeDefinitionIndex)->GetStaticField(0x23B38);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::Class_1_D17272E82AE804C2_413* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FDFA365FE186E8F2_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_17*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_17*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_17* Clone()
	{
		return ((::Class_1_FDFA365FE186E8F2_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_413* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_413*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_413*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FDFA365FE186E8F2_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_17*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FDFA365FE186E8F2_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_17*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
