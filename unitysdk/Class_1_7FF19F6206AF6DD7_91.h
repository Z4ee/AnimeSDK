#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_39;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_91_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C6AD0)
#define CLASS_1_7FF19F6206AF6DD7_91_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C6630)
#define CLASS_1_7FF19F6206AF6DD7_91_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C67E0)
#define CLASS_1_7FF19F6206AF6DD7_91_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C6690)
#define CLASS_1_7FF19F6206AF6DD7_91_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C6900)
#define CLASS_1_7FF19F6206AF6DD7_91_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C6CA0)
#define CLASS_1_7FF19F6206AF6DD7_91_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C6C00)
#define CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9C6670)
#define CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E9C6520)
#define CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E9C6660)
#define CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9C6680)
#define CLASS_1_7FF19F6206AF6DD7_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6550)
#define CLASS_1_7FF19F6206AF6DD7_91_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C6970)
#define CLASS_1_7FF19F6206AF6DD7_91_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C69D0)
#define CLASS_1_7FF19F6206AF6DD7_91__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6E60)
#define CLASS_1_7FF19F6206AF6DD7_91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C65A0)
#define CLASS_1_7FF19F6206AF6DD7_91__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6560)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_91_TypeDefinitionIndex = 33084;

class Class_1_7FF19F6206AF6DD7_91 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_91*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_91_TypeDefinitionIndex)->GetStaticField(0x10130);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_39*>** StaticGet_IONPMGIIDOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_91_TypeDefinitionIndex)->GetStaticField(0x10138);
	}
	// static const ::System::Int32 OHIAHIBONCL = 0xD; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_39*>* NDEEIPNCINM; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_91*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_91*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_91*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_91* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_39*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_91*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_91*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_91_MERGEFROM_1_OFFSET))(this, a1);
	}
};
