#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A21E270)
#define CLASS_1_7FF19F6206AF6DD7_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1A21DE00)
#define CLASS_1_7FF19F6206AF6DD7_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A21DFA0)
#define CLASS_1_7FF19F6206AF6DD7_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A21DE80)
#define CLASS_1_7FF19F6206AF6DD7_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A21E050)
#define CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A21E440)
#define CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A21E3A0)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A21DE60)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A21DC80)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A21DE50)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A21DE70)
#define CLASS_1_7FF19F6206AF6DD7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A21DCE0)
#define CLASS_1_7FF19F6206AF6DD7_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A21E140)
#define CLASS_1_7FF19F6206AF6DD7_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A21E1A0)
#define CLASS_1_7FF19F6206AF6DD7_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A21E610)
#define CLASS_1_7FF19F6206AF6DD7_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A21DD40)
#define CLASS_1_7FF19F6206AF6DD7_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1A21DCF0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex = 26602;

class Class_1_7FF19F6206AF6DD7_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex)->GetStaticField(0x75E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_18*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex)->GetStaticField(0x75E8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_18*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_21* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_18*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
