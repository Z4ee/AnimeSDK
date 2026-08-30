#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_129;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD9D110)
#define CLASS_1_7FF19F6206AF6DD7_100_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD9CC60)
#define CLASS_1_7FF19F6206AF6DD7_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD9CE10)
#define CLASS_1_7FF19F6206AF6DD7_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD9CCC0)
#define CLASS_1_7FF19F6206AF6DD7_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD9CF30)
#define CLASS_1_7FF19F6206AF6DD7_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD9D2E0)
#define CLASS_1_7FF19F6206AF6DD7_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD9D240)
#define CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DD9CCA0)
#define CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DD9CB50)
#define CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DD9CC90)
#define CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DD9CCB0)
#define CLASS_1_7FF19F6206AF6DD7_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD9CB80)
#define CLASS_1_7FF19F6206AF6DD7_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD9CFA0)
#define CLASS_1_7FF19F6206AF6DD7_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD9D000)
#define CLASS_1_7FF19F6206AF6DD7_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD9D4B0)
#define CLASS_1_7FF19F6206AF6DD7_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD9CBD0)
#define CLASS_1_7FF19F6206AF6DD7_100__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9CB90)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_100_TypeDefinitionIndex = 33575;

class Class_1_7FF19F6206AF6DD7_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_129*>** StaticGet_KIEIFOIPOIG()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_129*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_100_TypeDefinitionIndex)->GetStaticField(0x1A250);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_100*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_100_TypeDefinitionIndex)->GetStaticField(0x1A258);
	}
	// static const ::System::Int32 KPCMLBHKOAE = 0xC; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_129*>* OEPHKKPDMJP; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_100*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_100*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_100*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_100* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_129*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_129*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_100*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_100*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
