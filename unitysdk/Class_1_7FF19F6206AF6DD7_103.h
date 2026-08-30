#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_133;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_103_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA7F300)
#define CLASS_1_7FF19F6206AF6DD7_103_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA7EE40)
#define CLASS_1_7FF19F6206AF6DD7_103_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA7EFF0)
#define CLASS_1_7FF19F6206AF6DD7_103_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA7EEA0)
#define CLASS_1_7FF19F6206AF6DD7_103_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA7F120)
#define CLASS_1_7FF19F6206AF6DD7_103_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA7F4B0)
#define CLASS_1_7FF19F6206AF6DD7_103_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA7F410)
#define CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA7EE70)
#define CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DA7ED30)
#define CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DA7EE90)
#define CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA7EE80)
#define CLASS_1_7FF19F6206AF6DD7_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA7ED60)
#define CLASS_1_7FF19F6206AF6DD7_103_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA7F190)
#define CLASS_1_7FF19F6206AF6DD7_103_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA7F1F0)
#define CLASS_1_7FF19F6206AF6DD7_103__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA7F670)
#define CLASS_1_7FF19F6206AF6DD7_103__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA7EDB0)
#define CLASS_1_7FF19F6206AF6DD7_103__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7ED70)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_103_TypeDefinitionIndex = 33831;

class Class_1_7FF19F6206AF6DD7_103 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_103*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_103_TypeDefinitionIndex)->GetStaticField(0x1A100);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_133*>** StaticGet_DLCDOBJKEDC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_133*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_103_TypeDefinitionIndex)->GetStaticField(0x1A108);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x6; // 0x0
	// static const ::System::Int32 ICHKMKKLPEG = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_133*>* KFIFCCIFGDP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_103*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_103*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_103*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_103* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_103*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_133*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_133*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_103* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_103*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_103*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_103_MERGEFROM_1_OFFSET))(this, a1);
	}
};
