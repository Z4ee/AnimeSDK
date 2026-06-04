#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A2967FAA88DD8F73_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A268500)
#define CLASS_1_A2967FAA88DD8F73_CLONE_OFFSET UNITYSDK_OFFSET(0x1A267F90)
#define CLASS_1_A2967FAA88DD8F73_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A268160)
#define CLASS_1_A2967FAA88DD8F73_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A268070)
#define CLASS_1_A2967FAA88DD8F73_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A268210)
#define CLASS_1_A2967FAA88DD8F73_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A268860)
#define CLASS_1_A2967FAA88DD8F73_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2687F0)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A268030)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A268050)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A267FE0)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A267E30)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A268020)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A268000)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A268040)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A268060)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A267FF0)
#define CLASS_1_A2967FAA88DD8F73_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A268010)
#define CLASS_1_A2967FAA88DD8F73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A267E90)
#define CLASS_1_A2967FAA88DD8F73_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A268340)
#define CLASS_1_A2967FAA88DD8F73_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2683A0)
#define CLASS_1_A2967FAA88DD8F73__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A268990)
#define CLASS_1_A2967FAA88DD8F73__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A267EF0)
#define CLASS_1_A2967FAA88DD8F73__CTOR_OFFSET UNITYSDK_OFFSET(0x1A267EA0)

inline static constexpr unsigned int Class_1_A2967FAA88DD8F73_TypeDefinitionIndex = 30053;

class Class_1_A2967FAA88DD8F73 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2967FAA88DD8F73_TypeDefinitionIndex)->GetStaticField(0x45AE0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A2967FAA88DD8F73*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A2967FAA88DD8F73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2967FAA88DD8F73_TypeDefinitionIndex)->GetStaticField(0x45AE8);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::Int64 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt32 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A2967FAA88DD8F73*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A2967FAA88DD8F73*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A2967FAA88DD8F73* Clone()
	{
		return ((::Class_1_A2967FAA88DD8F73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A2967FAA88DD8F73_MERGEFROM_1_OFFSET))(this, a1);
	}
};
