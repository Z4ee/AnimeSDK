#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_42_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19655340)
#define CLASS_1_7FF19F6206AF6DD7_42_CLONE_OFFSET UNITYSDK_OFFSET(0x19654E90)
#define CLASS_1_7FF19F6206AF6DD7_42_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19655010)
#define CLASS_1_7FF19F6206AF6DD7_42_EQUALS_OFFSET UNITYSDK_OFFSET(0x19654F10)
#define CLASS_1_7FF19F6206AF6DD7_42_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196550D0)
#define CLASS_1_7FF19F6206AF6DD7_42_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19655580)
#define CLASS_1_7FF19F6206AF6DD7_42_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196554D0)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19654EF0)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19654EC0)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19654D40)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19654EE0)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19654F00)
#define CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19654ED0)
#define CLASS_1_7FF19F6206AF6DD7_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19654D70)
#define CLASS_1_7FF19F6206AF6DD7_42_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196551D0)
#define CLASS_1_7FF19F6206AF6DD7_42_WRITETO_OFFSET UNITYSDK_OFFSET(0x19655230)
#define CLASS_1_7FF19F6206AF6DD7_42__CCTOR_OFFSET UNITYSDK_OFFSET(0x19655660)
#define CLASS_1_7FF19F6206AF6DD7_42__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19654DD0)
#define CLASS_1_7FF19F6206AF6DD7_42__CTOR_OFFSET UNITYSDK_OFFSET(0x19654D80)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_42_TypeDefinitionIndex = 30585;

class Class_1_7FF19F6206AF6DD7_42 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_18C00C8FB77B0B39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_42_TypeDefinitionIndex)->GetStaticField(0x5D50);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_42*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_42*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_42_TypeDefinitionIndex)->GetStaticField(0x5D58);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_42*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_42*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_42*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_42* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_18C00C8FB77B0B39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_42* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_42*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_42*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_42_MERGEFROM_1_OFFSET))(this, a1);
	}
};
