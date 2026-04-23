#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82FF7F2EB111F17B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19925AD0)
#define CLASS_1_7FF19F6206AF6DD7_15_CLONE_OFFSET UNITYSDK_OFFSET(0x19925660)
#define CLASS_1_7FF19F6206AF6DD7_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19925800)
#define CLASS_1_7FF19F6206AF6DD7_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x199256E0)
#define CLASS_1_7FF19F6206AF6DD7_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199258B0)
#define CLASS_1_7FF19F6206AF6DD7_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19925CA0)
#define CLASS_1_7FF19F6206AF6DD7_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19925C00)
#define CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x199256C0)
#define CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19925520)
#define CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x199256B0)
#define CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x199256D0)
#define CLASS_1_7FF19F6206AF6DD7_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19925580)
#define CLASS_1_7FF19F6206AF6DD7_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199259A0)
#define CLASS_1_7FF19F6206AF6DD7_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x19925A00)
#define CLASS_1_7FF19F6206AF6DD7_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x19925D80)
#define CLASS_1_7FF19F6206AF6DD7_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199255D0)
#define CLASS_1_7FF19F6206AF6DD7_15__CTOR_OFFSET UNITYSDK_OFFSET(0x19925590)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_15_TypeDefinitionIndex = 25714;

class Class_1_7FF19F6206AF6DD7_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_82FF7F2EB111F17B*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_82FF7F2EB111F17B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_15_TypeDefinitionIndex)->GetStaticField(0x5B8B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_15*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_15_TypeDefinitionIndex)->GetStaticField(0x5B8B8);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_82FF7F2EB111F17B*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_15*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_15*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_15* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_82FF7F2EB111F17B*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_82FF7F2EB111F17B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_15*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_15*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
