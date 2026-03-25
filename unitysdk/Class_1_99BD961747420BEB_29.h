#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1818F6F0)
#define CLASS_1_99BD961747420BEB_29_CLONE_OFFSET UNITYSDK_OFFSET(0x1818F200)
#define CLASS_1_99BD961747420BEB_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1818F3A0)
#define CLASS_1_99BD961747420BEB_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1818F2C0)
#define CLASS_1_99BD961747420BEB_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1818F450)
#define CLASS_1_99BD961747420BEB_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1818F950)
#define CLASS_1_99BD961747420BEB_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1818F8F0)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1818F270)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1818F2A0)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1818F250)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1818F290)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1818F280)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1818F2B0)
#define CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1818F260)
#define CLASS_1_99BD961747420BEB_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1818F100)
#define CLASS_1_99BD961747420BEB_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1818F560)
#define CLASS_1_99BD961747420BEB_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1818F5C0)
#define CLASS_1_99BD961747420BEB_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818FA60)
#define CLASS_1_99BD961747420BEB_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1818F160)
#define CLASS_1_99BD961747420BEB_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1818F110)

inline static constexpr unsigned int Class_1_99BD961747420BEB_29_TypeDefinitionIndex = 24726;

class Class_1_99BD961747420BEB_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_29_TypeDefinitionIndex)->GetStaticField(0xC6E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_29* Clone()
	{
		return ((::Class_1_99BD961747420BEB_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
