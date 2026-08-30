#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBB1C30)
#define CLASS_1_7FF19F6206AF6DD7_50_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBB1780)
#define CLASS_1_7FF19F6206AF6DD7_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBB1930)
#define CLASS_1_7FF19F6206AF6DD7_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBB17E0)
#define CLASS_1_7FF19F6206AF6DD7_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBB1A50)
#define CLASS_1_7FF19F6206AF6DD7_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBB1E00)
#define CLASS_1_7FF19F6206AF6DD7_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBB1D60)
#define CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DBB17C0)
#define CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DBB1670)
#define CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DBB17B0)
#define CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DBB17D0)
#define CLASS_1_7FF19F6206AF6DD7_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBB16A0)
#define CLASS_1_7FF19F6206AF6DD7_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBB1AC0)
#define CLASS_1_7FF19F6206AF6DD7_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBB1B20)
#define CLASS_1_7FF19F6206AF6DD7_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBB1FC0)
#define CLASS_1_7FF19F6206AF6DD7_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBB16F0)
#define CLASS_1_7FF19F6206AF6DD7_50__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB16B0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_50_TypeDefinitionIndex = 29875;

class Class_1_7FF19F6206AF6DD7_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>** StaticGet_GAINFCCDPFB()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_50_TypeDefinitionIndex)->GetStaticField(0x35DC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_50*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_50_TypeDefinitionIndex)->GetStaticField(0x35DC8);
	}
	// static const ::System::Int32 EFEMONKDOCM = 0x5; // 0x0
	// static const ::System::Int32 CIAMJBNLMBJ = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* MDELKGNPIOF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 DOLJGAFKGFJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_50*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_50*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_50*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_50* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_50*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_50*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
