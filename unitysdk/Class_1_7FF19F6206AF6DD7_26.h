#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_36;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D83CA00)
#define CLASS_1_7FF19F6206AF6DD7_26_CLONE_OFFSET UNITYSDK_OFFSET(0x1D83C540)
#define CLASS_1_7FF19F6206AF6DD7_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D83C6F0)
#define CLASS_1_7FF19F6206AF6DD7_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D83C5A0)
#define CLASS_1_7FF19F6206AF6DD7_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D83C820)
#define CLASS_1_7FF19F6206AF6DD7_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D83CBB0)
#define CLASS_1_7FF19F6206AF6DD7_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D83CB10)
#define CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D83C570)
#define CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D83C3F0)
#define CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1D83C590)
#define CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D83C580)
#define CLASS_1_7FF19F6206AF6DD7_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D83C420)
#define CLASS_1_7FF19F6206AF6DD7_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D83C890)
#define CLASS_1_7FF19F6206AF6DD7_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D83C8F0)
#define CLASS_1_7FF19F6206AF6DD7_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D83CD80)
#define CLASS_1_7FF19F6206AF6DD7_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D83C480)
#define CLASS_1_7FF19F6206AF6DD7_26__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C430)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_26_TypeDefinitionIndex = 27475;

class Class_1_7FF19F6206AF6DD7_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_36*>** StaticGet_BHAFPFJMPEH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_36*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_26_TypeDefinitionIndex)->GetStaticField(0x33AA0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_26*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_26_TypeDefinitionIndex)->GetStaticField(0x33AA8);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xB; // 0x0
	// static const ::System::Int32 GODKLBDAMJO = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_36*>* GEGKDEALGDF; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_26*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_26*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_26*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_26* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_36*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_36*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_26*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_26*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
