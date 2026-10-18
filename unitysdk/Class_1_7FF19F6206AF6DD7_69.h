#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_88;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2403B0)
#define CLASS_1_7FF19F6206AF6DD7_69_CLONE_OFFSET UNITYSDK_OFFSET(0x1E23FEF0)
#define CLASS_1_7FF19F6206AF6DD7_69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2400A0)
#define CLASS_1_7FF19F6206AF6DD7_69_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E23FF50)
#define CLASS_1_7FF19F6206AF6DD7_69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2401D0)
#define CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E240560)
#define CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2404C0)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E23FF20)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E23FDE0)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E23FF40)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E23FF30)
#define CLASS_1_7FF19F6206AF6DD7_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E23FE10)
#define CLASS_1_7FF19F6206AF6DD7_69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E240240)
#define CLASS_1_7FF19F6206AF6DD7_69_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2402A0)
#define CLASS_1_7FF19F6206AF6DD7_69__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E240720)
#define CLASS_1_7FF19F6206AF6DD7_69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E23FE60)
#define CLASS_1_7FF19F6206AF6DD7_69__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23FE20)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex = 30853;

class Class_1_7FF19F6206AF6DD7_69 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex)->GetStaticField(0x398C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_88*>** StaticGet_KHHKBFGFEHM()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex)->GetStaticField(0x398C8);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x2; // 0x0
	// static const ::System::Int32 FKOOMEIBDDD = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>* KODKPBCPMIA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_69* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_88*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
