#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
class Class_1_D17272E82AE804C2_228;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E1C52EF642F86050_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2F8230)
#define CLASS_1_E1C52EF642F86050_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2F7CE0)
#define CLASS_1_E1C52EF642F86050_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2F7F90)
#define CLASS_1_E1C52EF642F86050_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2F7E60)
#define CLASS_1_E1C52EF642F86050_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2F8090)
#define CLASS_1_E1C52EF642F86050_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2F8470)
#define CLASS_1_E1C52EF642F86050_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2F8330)
#define CLASS_1_E1C52EF642F86050_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2F7DE0)
#define CLASS_1_E1C52EF642F86050_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A2F7E40)
#define CLASS_1_E1C52EF642F86050_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A2F7E20)
#define CLASS_1_E1C52EF642F86050_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A2F7BB0)
#define CLASS_1_E1C52EF642F86050_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A2F7DF0)
#define CLASS_1_E1C52EF642F86050_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A2F7E50)
#define CLASS_1_E1C52EF642F86050_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A2F7E30)
#define CLASS_1_E1C52EF642F86050_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A2F7E10)
#define CLASS_1_E1C52EF642F86050_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2F7E00)
#define CLASS_1_E1C52EF642F86050_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2F7C10)
#define CLASS_1_E1C52EF642F86050_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2F8100)
#define CLASS_1_E1C52EF642F86050_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2F8160)
#define CLASS_1_E1C52EF642F86050__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F85D0)
#define CLASS_1_E1C52EF642F86050__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2F7C30)
#define CLASS_1_E1C52EF642F86050__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F7C20)

inline static constexpr unsigned int Class_1_E1C52EF642F86050_TypeDefinitionIndex = 25978;

class Class_1_E1C52EF642F86050 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E1C52EF642F86050*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E1C52EF642F86050*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1C52EF642F86050_TypeDefinitionIndex)->GetStaticField(0x50F10);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Class_1_2135BD0826D34A80* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Class_1_D17272E82AE804C2_228* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::Boolean Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E1C52EF642F86050* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1C52EF642F86050*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E1C52EF642F86050*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E1C52EF642F86050*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E1C52EF642F86050* Clone()
	{
		return ((::Class_1_E1C52EF642F86050*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_2135BD0826D34A80* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2135BD0826D34A80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2135BD0826D34A80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_228* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_228*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_228* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_228*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E1C52EF642F86050* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E1C52EF642F86050*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E1C52EF642F86050* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1C52EF642F86050*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E1C52EF642F86050_MERGEFROM_1_OFFSET))(this, a1);
	}
};
