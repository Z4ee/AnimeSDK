#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D3F3D75C45AAB16C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A22B510)
#define CLASS_1_D3F3D75C45AAB16C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A22B180)
#define CLASS_1_D3F3D75C45AAB16C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A22B340)
#define CLASS_1_D3F3D75C45AAB16C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A22B260)
#define CLASS_1_D3F3D75C45AAB16C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A22B3F0)
#define CLASS_1_D3F3D75C45AAB16C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A22B600)
#define CLASS_1_D3F3D75C45AAB16C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A22B570)
#define CLASS_1_D3F3D75C45AAB16C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A22B240)
#define CLASS_1_D3F3D75C45AAB16C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A22B090)
#define CLASS_1_D3F3D75C45AAB16C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A22B250)
#define CLASS_1_D3F3D75C45AAB16C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A22B230)
#define CLASS_1_D3F3D75C45AAB16C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A22B220)
#define CLASS_1_D3F3D75C45AAB16C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A22B0F0)
#define CLASS_1_D3F3D75C45AAB16C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A22B430)
#define CLASS_1_D3F3D75C45AAB16C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A22B490)
#define CLASS_1_D3F3D75C45AAB16C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A22B7C0)
#define CLASS_1_D3F3D75C45AAB16C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A22B110)
#define CLASS_1_D3F3D75C45AAB16C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22B100)

inline static constexpr unsigned int Class_1_D3F3D75C45AAB16C_TypeDefinitionIndex = 28384;

class Class_1_D3F3D75C45AAB16C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D3F3D75C45AAB16C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D3F3D75C45AAB16C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3F3D75C45AAB16C_TypeDefinitionIndex)->GetStaticField(0x3ED60);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Class_1_C74059A83466814F* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D3F3D75C45AAB16C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3F3D75C45AAB16C*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D3F3D75C45AAB16C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D3F3D75C45AAB16C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D3F3D75C45AAB16C* Clone()
	{
		return ((::Class_1_D3F3D75C45AAB16C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D3F3D75C45AAB16C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D3F3D75C45AAB16C*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D3F3D75C45AAB16C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3F3D75C45AAB16C*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3F3D75C45AAB16C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
