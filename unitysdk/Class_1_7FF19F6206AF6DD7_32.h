#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_67;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A10BDA0)
#define CLASS_1_7FF19F6206AF6DD7_32_CLONE_OFFSET UNITYSDK_OFFSET(0x1A10B930)
#define CLASS_1_7FF19F6206AF6DD7_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A10BAD0)
#define CLASS_1_7FF19F6206AF6DD7_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A10B9B0)
#define CLASS_1_7FF19F6206AF6DD7_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A10BB80)
#define CLASS_1_7FF19F6206AF6DD7_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A10BF50)
#define CLASS_1_7FF19F6206AF6DD7_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A10BEB0)
#define CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A10B980)
#define CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A10B7B0)
#define CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A10B9A0)
#define CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A10B990)
#define CLASS_1_7FF19F6206AF6DD7_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A10B810)
#define CLASS_1_7FF19F6206AF6DD7_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A10BC70)
#define CLASS_1_7FF19F6206AF6DD7_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A10BCD0)
#define CLASS_1_7FF19F6206AF6DD7_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A10C120)
#define CLASS_1_7FF19F6206AF6DD7_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A10B870)
#define CLASS_1_7FF19F6206AF6DD7_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10B820)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_32_TypeDefinitionIndex = 29004;

class Class_1_7FF19F6206AF6DD7_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_32*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_32_TypeDefinitionIndex)->GetStaticField(0x279B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_67*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_32_TypeDefinitionIndex)->GetStaticField(0x279B8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_67*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_32*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_32*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_32* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_67*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_67*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_32*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_32*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
