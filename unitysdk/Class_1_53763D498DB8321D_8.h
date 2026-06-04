#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_53763D498DB8321D_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7AB6D0)
#define CLASS_1_53763D498DB8321D_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7AB2A0)
#define CLASS_1_53763D498DB8321D_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7AB3A0)
#define CLASS_1_53763D498DB8321D_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7AB370)
#define CLASS_1_53763D498DB8321D_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7AB480)
#define CLASS_1_53763D498DB8321D_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7AB9E0)
#define CLASS_1_53763D498DB8321D_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7AB950)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A7AB2F0)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A7AB310)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A7AB330)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7AB2D0)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7AB160)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A7AB300)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A7AB320)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A7AB340)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7AB2E0)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_EA98AC27B86895E5_1_OFFSET UNITYSDK_OFFSET(0x1A7AB360)
#define CLASS_1_53763D498DB8321D_8_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1A7AB350)
#define CLASS_1_53763D498DB8321D_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7AB190)
#define CLASS_1_53763D498DB8321D_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7AB500)
#define CLASS_1_53763D498DB8321D_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7AB560)
#define CLASS_1_53763D498DB8321D_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7ABB40)
#define CLASS_1_53763D498DB8321D_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7AB1F0)
#define CLASS_1_53763D498DB8321D_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7AB1A0)

inline static constexpr unsigned int Class_1_53763D498DB8321D_8_TypeDefinitionIndex = 32739;

class Class_1_53763D498DB8321D_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_8_TypeDefinitionIndex)->GetStaticField(0x49AF0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_8_TypeDefinitionIndex)->GetStaticField(0x49AF8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_8_TypeDefinitionIndex)->GetStaticField(0x49B00);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_53763D498DB8321D_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_8*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_53763D498DB8321D_8* Clone()
	{
		return ((::Class_1_53763D498DB8321D_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5_1()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_METHOD_1_EA98AC27B86895E5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_53763D498DB8321D_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_53763D498DB8321D_8*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_53763D498DB8321D_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_8*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
