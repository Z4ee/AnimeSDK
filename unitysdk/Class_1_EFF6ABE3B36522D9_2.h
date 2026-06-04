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

#define CLASS_1_EFF6ABE3B36522D9_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB5BEA0)
#define CLASS_1_EFF6ABE3B36522D9_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB5B8D0)
#define CLASS_1_EFF6ABE3B36522D9_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB5BAD0)
#define CLASS_1_EFF6ABE3B36522D9_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB5B9D0)
#define CLASS_1_EFF6ABE3B36522D9_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB5BBA0)
#define CLASS_1_EFF6ABE3B36522D9_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB5C1B0)
#define CLASS_1_EFF6ABE3B36522D9_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB5C130)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AB5B940)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AB5B960)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1AB5B9B0)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AB5B920)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AB5B770)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AB5B980)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AB5B950)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AB5B970)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1AB5B9C0)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AB5B930)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AB5B9A0)
#define CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AB5B990)
#define CLASS_1_EFF6ABE3B36522D9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB5B7D0)
#define CLASS_1_EFF6ABE3B36522D9_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB5BCC0)
#define CLASS_1_EFF6ABE3B36522D9_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB5BD20)
#define CLASS_1_EFF6ABE3B36522D9_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB5C310)
#define CLASS_1_EFF6ABE3B36522D9_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB5B830)
#define CLASS_1_EFF6ABE3B36522D9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5B7E0)

inline static constexpr unsigned int Class_1_EFF6ABE3B36522D9_2_TypeDefinitionIndex = 28043;

class Class_1_EFF6ABE3B36522D9_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFF6ABE3B36522D9_2_TypeDefinitionIndex)->GetStaticField(0x1AD00);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFF6ABE3B36522D9_2_TypeDefinitionIndex)->GetStaticField(0x1AD08);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::Boolean Field_1_14; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EFF6ABE3B36522D9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_2*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EFF6ABE3B36522D9_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EFF6ABE3B36522D9_2* Clone()
	{
		return ((::Class_1_EFF6ABE3B36522D9_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EFF6ABE3B36522D9_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_2*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EFF6ABE3B36522D9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_2*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EFF6ABE3B36522D9_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
