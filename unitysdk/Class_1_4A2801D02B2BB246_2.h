#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4A2801D02B2BB246_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C863760)
#define CLASS_1_4A2801D02B2BB246_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8631C0)
#define CLASS_1_4A2801D02B2BB246_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8632C0)
#define CLASS_1_4A2801D02B2BB246_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C863290)
#define CLASS_1_4A2801D02B2BB246_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C863390)
#define CLASS_1_4A2801D02B2BB246_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C863A80)
#define CLASS_1_4A2801D02B2BB246_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8639F0)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C863210)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C863230)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C863250)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8631F0)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C863270)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C863000)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C863220)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C863240)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C863260)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C863200)
#define CLASS_1_4A2801D02B2BB246_2_METHOD_1_AF0DEDC0F76C8BDF_OFFSET UNITYSDK_OFFSET(0x1C863280)
#define CLASS_1_4A2801D02B2BB246_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C863030)
#define CLASS_1_4A2801D02B2BB246_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8634F0)
#define CLASS_1_4A2801D02B2BB246_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C863550)
#define CLASS_1_4A2801D02B2BB246_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C863C00)
#define CLASS_1_4A2801D02B2BB246_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8630C0)
#define CLASS_1_4A2801D02B2BB246_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C863040)

inline static constexpr unsigned int Class_1_4A2801D02B2BB246_2_TypeDefinitionIndex = 24491;

class Class_1_4A2801D02B2BB246_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A2801D02B2BB246_2_TypeDefinitionIndex)->GetStaticField(0x18A00);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4A2801D02B2BB246_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4A2801D02B2BB246_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A2801D02B2BB246_2_TypeDefinitionIndex)->GetStaticField(0x18A08);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A2801D02B2BB246_2_TypeDefinitionIndex)->GetStaticField(0x18A10);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4A2801D02B2BB246_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A2801D02B2BB246_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4A2801D02B2BB246_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4A2801D02B2BB246_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4A2801D02B2BB246_2* Clone()
	{
		return ((::Class_1_4A2801D02B2BB246_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Method_1_AF0DEDC0F76C8BDF()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_METHOD_1_AF0DEDC0F76C8BDF_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4A2801D02B2BB246_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4A2801D02B2BB246_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4A2801D02B2BB246_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A2801D02B2BB246_2*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A2801D02B2BB246_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
