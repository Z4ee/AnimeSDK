#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C71A717EF6221939_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9BD730)
#define CLASS_1_C71A717EF6221939_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9BD1D0)
#define CLASS_1_C71A717EF6221939_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9BD420)
#define CLASS_1_C71A717EF6221939_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9BD2A0)
#define CLASS_1_C71A717EF6221939_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9BD5A0)
#define CLASS_1_C71A717EF6221939_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9BD920)
#define CLASS_1_C71A717EF6221939_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9BD840)
#define CLASS_1_C71A717EF6221939_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C9BD280)
#define CLASS_1_C71A717EF6221939_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C9BD270)
#define CLASS_1_C71A717EF6221939_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C9BD100)
#define CLASS_1_C71A717EF6221939_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C9BD290)
#define CLASS_1_C71A717EF6221939_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C9BD260)
#define CLASS_1_C71A717EF6221939_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9BD130)
#define CLASS_1_C71A717EF6221939_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9BD5E0)
#define CLASS_1_C71A717EF6221939_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9BD640)
#define CLASS_1_C71A717EF6221939_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9BDB10)
#define CLASS_1_C71A717EF6221939_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9BD150)
#define CLASS_1_C71A717EF6221939_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BD140)

inline static constexpr unsigned int Class_1_C71A717EF6221939_6_TypeDefinitionIndex = 27582;

class Class_1_C71A717EF6221939_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C71A717EF6221939_6_TypeDefinitionIndex)->GetStaticField(0x2100);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_419A79D235B9417C_4* Field_1_4; // 0x18
	::Enum_3_96F6662CA3713095_17 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C71A717EF6221939_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939_6*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C71A717EF6221939_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C71A717EF6221939_6* Clone()
	{
		return ((::Class_1_C71A717EF6221939_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_CLONE_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_17 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_17 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_17))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_419A79D235B9417C_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_419A79D235B9417C_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_419A79D235B9417C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_4*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C71A717EF6221939_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C71A717EF6221939_6*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C71A717EF6221939_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C71A717EF6221939_6*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C71A717EF6221939_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
