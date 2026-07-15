#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_825B6978607E6BB0_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C4039B0)
#define CLASS_1_825B6978607E6BB0_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1C403400)
#define CLASS_1_825B6978607E6BB0_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C4036A0)
#define CLASS_1_825B6978607E6BB0_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C4034F0)
#define CLASS_1_825B6978607E6BB0_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C403820)
#define CLASS_1_825B6978607E6BB0_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C403B90)
#define CLASS_1_825B6978607E6BB0_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C403A80)
#define CLASS_1_825B6978607E6BB0_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C4034D0)
#define CLASS_1_825B6978607E6BB0_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C4034B0)
#define CLASS_1_825B6978607E6BB0_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C403310)
#define CLASS_1_825B6978607E6BB0_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C4034E0)
#define CLASS_1_825B6978607E6BB0_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C4034C0)
#define CLASS_1_825B6978607E6BB0_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C403370)
#define CLASS_1_825B6978607E6BB0_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C403870)
#define CLASS_1_825B6978607E6BB0_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C4038D0)
#define CLASS_1_825B6978607E6BB0_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C403D60)
#define CLASS_1_825B6978607E6BB0_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C403390)
#define CLASS_1_825B6978607E6BB0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C403380)

inline static constexpr unsigned int Class_1_825B6978607E6BB0_5_TypeDefinitionIndex = 26776;

class Class_1_825B6978607E6BB0_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_825B6978607E6BB0_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_825B6978607E6BB0_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_825B6978607E6BB0_5_TypeDefinitionIndex)->GetStaticField(0x32550);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_7E9AC8675DA072FB* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_825B6978607E6BB0_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_825B6978607E6BB0_5*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_825B6978607E6BB0_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_825B6978607E6BB0_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_825B6978607E6BB0_5* Clone()
	{
		return ((::Class_1_825B6978607E6BB0_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_CLONE_OFFSET))(this);
	}

	::Class_1_7E9AC8675DA072FB* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7E9AC8675DA072FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7E9AC8675DA072FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_825B6978607E6BB0_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_825B6978607E6BB0_5*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_825B6978607E6BB0_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_825B6978607E6BB0_5*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_825B6978607E6BB0_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
