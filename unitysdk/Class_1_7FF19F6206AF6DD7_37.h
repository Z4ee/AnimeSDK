#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_26;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_37_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE5B2C0)
#define CLASS_1_7FF19F6206AF6DD7_37_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE5AE10)
#define CLASS_1_7FF19F6206AF6DD7_37_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE5AFC0)
#define CLASS_1_7FF19F6206AF6DD7_37_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE5AE70)
#define CLASS_1_7FF19F6206AF6DD7_37_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE5B0E0)
#define CLASS_1_7FF19F6206AF6DD7_37_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE5B490)
#define CLASS_1_7FF19F6206AF6DD7_37_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE5B3F0)
#define CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CE5AE50)
#define CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CE5ACC0)
#define CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CE5AE40)
#define CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CE5AE60)
#define CLASS_1_7FF19F6206AF6DD7_37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE5ACF0)
#define CLASS_1_7FF19F6206AF6DD7_37_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE5B150)
#define CLASS_1_7FF19F6206AF6DD7_37_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE5B1B0)
#define CLASS_1_7FF19F6206AF6DD7_37__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5B660)
#define CLASS_1_7FF19F6206AF6DD7_37__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE5AD50)
#define CLASS_1_7FF19F6206AF6DD7_37__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5AD00)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_37_TypeDefinitionIndex = 28972;

class Class_1_7FF19F6206AF6DD7_37 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_37*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_37_TypeDefinitionIndex)->GetStaticField(0x403A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_26*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_37_TypeDefinitionIndex)->GetStaticField(0x403A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_26*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_37*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_37*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_37* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_26*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_37* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_37_MERGEFROM_1_OFFSET))(this, a1);
	}
};
