#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4FE6DADC546DF06C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2888E86B8599436F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19522980)
#define CLASS_1_2888E86B8599436F_CLONE_OFFSET UNITYSDK_OFFSET(0x19522530)
#define CLASS_1_2888E86B8599436F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19522720)
#define CLASS_1_2888E86B8599436F_EQUALS_OFFSET UNITYSDK_OFFSET(0x19522640)
#define CLASS_1_2888E86B8599436F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19522800)
#define CLASS_1_2888E86B8599436F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19522B80)
#define CLASS_1_2888E86B8599436F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19522A60)
#define CLASS_1_2888E86B8599436F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19522620)
#define CLASS_1_2888E86B8599436F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x195225C0)
#define CLASS_1_2888E86B8599436F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19522460)
#define CLASS_1_2888E86B8599436F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19522630)
#define CLASS_1_2888E86B8599436F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x195225D0)
#define CLASS_1_2888E86B8599436F_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19522610)
#define CLASS_1_2888E86B8599436F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x195225F0)
#define CLASS_1_2888E86B8599436F_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19522600)
#define CLASS_1_2888E86B8599436F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x195225E0)
#define CLASS_1_2888E86B8599436F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19522490)
#define CLASS_1_2888E86B8599436F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19522850)
#define CLASS_1_2888E86B8599436F_WRITETO_OFFSET UNITYSDK_OFFSET(0x195228B0)
#define CLASS_1_2888E86B8599436F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19522C80)
#define CLASS_1_2888E86B8599436F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195224B0)
#define CLASS_1_2888E86B8599436F__CTOR_OFFSET UNITYSDK_OFFSET(0x195224A0)

inline static constexpr unsigned int Class_1_2888E86B8599436F_TypeDefinitionIndex = 26334;

class Class_1_2888E86B8599436F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2888E86B8599436F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2888E86B8599436F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2888E86B8599436F_TypeDefinitionIndex)->GetStaticField(0x45E50);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xE; // 0x0
	::Class_1_4FE6DADC546DF06C* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::Boolean Field_1_7; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2888E86B8599436F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2888E86B8599436F*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2888E86B8599436F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2888E86B8599436F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2888E86B8599436F* Clone()
	{
		return ((::Class_1_2888E86B8599436F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_CLONE_OFFSET))(this);
	}

	::Class_1_4FE6DADC546DF06C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4FE6DADC546DF06C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4FE6DADC546DF06C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FE6DADC546DF06C*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2888E86B8599436F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2888E86B8599436F*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2888E86B8599436F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2888E86B8599436F*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2888E86B8599436F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
