#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20D743894CDF214D_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4AC61D5E9B843CFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19725AA0)
#define CLASS_1_4AC61D5E9B843CFF_CLONE_OFFSET UNITYSDK_OFFSET(0x197253B0)
#define CLASS_1_4AC61D5E9B843CFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19725580)
#define CLASS_1_4AC61D5E9B843CFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x19725520)
#define CLASS_1_4AC61D5E9B843CFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197256A0)
#define CLASS_1_4AC61D5E9B843CFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19725EB0)
#define CLASS_1_4AC61D5E9B843CFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19725DB0)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197254D0)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19725400)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19725500)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x197254C0)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19725220)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x197254F0)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197254E0)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19725510)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19725410)
#define CLASS_1_4AC61D5E9B843CFF_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x197254B0)
#define CLASS_1_4AC61D5E9B843CFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19725280)
#define CLASS_1_4AC61D5E9B843CFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197258D0)
#define CLASS_1_4AC61D5E9B843CFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x19725930)
#define CLASS_1_4AC61D5E9B843CFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19726080)
#define CLASS_1_4AC61D5E9B843CFF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197252F0)
#define CLASS_1_4AC61D5E9B843CFF__CTOR_OFFSET UNITYSDK_OFFSET(0x19725290)

inline static constexpr unsigned int Class_1_4AC61D5E9B843CFF_TypeDefinitionIndex = 32239;

class Class_1_4AC61D5E9B843CFF : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AC61D5E9B843CFF_TypeDefinitionIndex)->GetStaticField(0x52E20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AC61D5E9B843CFF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AC61D5E9B843CFF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AC61D5E9B843CFF_TypeDefinitionIndex)->GetStaticField(0x52E28);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_20D743894CDF214D_1* Field_1_12; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::UInt64 Field_1_5; // 0x30
	::System::UInt32 Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AC61D5E9B843CFF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AC61D5E9B843CFF*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AC61D5E9B843CFF*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AC61D5E9B843CFF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AC61D5E9B843CFF* Clone()
	{
		return ((::Class_1_4AC61D5E9B843CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_20D743894CDF214D_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_20D743894CDF214D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AC61D5E9B843CFF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AC61D5E9B843CFF*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AC61D5E9B843CFF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AC61D5E9B843CFF*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
