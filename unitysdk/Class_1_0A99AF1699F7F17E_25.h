#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_097D93F83453E9A1_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C1E73B0)
#define CLASS_1_0A99AF1699F7F17E_25_CLONE_OFFSET UNITYSDK_OFFSET(0x1C1E6F30)
#define CLASS_1_0A99AF1699F7F17E_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C1E7110)
#define CLASS_1_0A99AF1699F7F17E_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C1E6F90)
#define CLASS_1_0A99AF1699F7F17E_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C1E7230)
#define CLASS_1_0A99AF1699F7F17E_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C1E74F0)
#define CLASS_1_0A99AF1699F7F17E_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C1E7450)
#define CLASS_1_0A99AF1699F7F17E_25_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C1E6DF0)
#define CLASS_1_0A99AF1699F7F17E_25_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C1E6F80)
#define CLASS_1_0A99AF1699F7F17E_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C1E6E50)
#define CLASS_1_0A99AF1699F7F17E_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1E72A0)
#define CLASS_1_0A99AF1699F7F17E_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C1E7300)
#define CLASS_1_0A99AF1699F7F17E_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E76B0)
#define CLASS_1_0A99AF1699F7F17E_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1E6EA0)
#define CLASS_1_0A99AF1699F7F17E_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E6E60)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_25_TypeDefinitionIndex = 31126;

class Class_1_0A99AF1699F7F17E_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_097D93F83453E9A1_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_097D93F83453E9A1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_25_TypeDefinitionIndex)->GetStaticField(0x471A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_25*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_25_TypeDefinitionIndex)->GetStaticField(0x471A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_25*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_25*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_25* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_25*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_25*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
