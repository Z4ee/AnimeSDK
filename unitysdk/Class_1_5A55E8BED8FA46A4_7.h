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

#define CLASS_1_5A55E8BED8FA46A4_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C2E650)
#define CLASS_1_5A55E8BED8FA46A4_7_CLONE_OFFSET UNITYSDK_OFFSET(0x19C2E1E0)
#define CLASS_1_5A55E8BED8FA46A4_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C2E280)
#define CLASS_1_5A55E8BED8FA46A4_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C2E250)
#define CLASS_1_5A55E8BED8FA46A4_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C2E340)
#define CLASS_1_5A55E8BED8FA46A4_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C2E7E0)
#define CLASS_1_5A55E8BED8FA46A4_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C2E770)
#define CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C2E230)
#define CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19C2E220)
#define CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19C2E210)
#define CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C2E020)
#define CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C2E240)
#define CLASS_1_5A55E8BED8FA46A4_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C2E050)
#define CLASS_1_5A55E8BED8FA46A4_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C2E520)
#define CLASS_1_5A55E8BED8FA46A4_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C2E580)
#define CLASS_1_5A55E8BED8FA46A4_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C2E900)
#define CLASS_1_5A55E8BED8FA46A4_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C2E0F0)
#define CLASS_1_5A55E8BED8FA46A4_7__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2E060)

inline static constexpr unsigned int Class_1_5A55E8BED8FA46A4_7_TypeDefinitionIndex = 30720;

class Class_1_5A55E8BED8FA46A4_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A55E8BED8FA46A4_7_TypeDefinitionIndex)->GetStaticField(0x5A4B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A55E8BED8FA46A4_7_TypeDefinitionIndex)->GetStaticField(0x5A4B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5A55E8BED8FA46A4_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5A55E8BED8FA46A4_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A55E8BED8FA46A4_7_TypeDefinitionIndex)->GetStaticField(0x5A4C0);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5A55E8BED8FA46A4_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_7*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5A55E8BED8FA46A4_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5A55E8BED8FA46A4_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5A55E8BED8FA46A4_7* Clone()
	{
		return ((::Class_1_5A55E8BED8FA46A4_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5A55E8BED8FA46A4_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_7*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5A55E8BED8FA46A4_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_7*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5A55E8BED8FA46A4_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
