#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE_4;
class Class_1_5D5F340EEA440344_1;
class Class_1_DD449B0795604250;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_680178D605286D96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18125230)
#define CLASS_1_680178D605286D96_CLONE_OFFSET UNITYSDK_OFFSET(0x18124D90)
#define CLASS_1_680178D605286D96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18124E90)
#define CLASS_1_680178D605286D96_EQUALS_OFFSET UNITYSDK_OFFSET(0x18124E60)
#define CLASS_1_680178D605286D96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18125000)
#define CLASS_1_680178D605286D96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18125520)
#define CLASS_1_680178D605286D96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181253A0)
#define CLASS_1_680178D605286D96_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18124E00)
#define CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18124E20)
#define CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x18124E40)
#define CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18124DE0)
#define CLASS_1_680178D605286D96_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x18124DD0)
#define CLASS_1_680178D605286D96_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x18124DC0)
#define CLASS_1_680178D605286D96_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18124E10)
#define CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x18124E30)
#define CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x18124E50)
#define CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18124DF0)
#define CLASS_1_680178D605286D96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18124C00)
#define CLASS_1_680178D605286D96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181250D0)
#define CLASS_1_680178D605286D96_WRITETO_OFFSET UNITYSDK_OFFSET(0x18125130)
#define CLASS_1_680178D605286D96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18124C20)
#define CLASS_1_680178D605286D96__CTOR_OFFSET UNITYSDK_OFFSET(0x18124C10)

inline static constexpr unsigned int Class_1_680178D605286D96_TypeDefinitionIndex = 26796;

class Class_1_680178D605286D96 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Proto::ItemList* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_5D5F340EEA440344_1* Field_1_10; // 0x20
	::Class_1_3A7B270FE0BE90AE_4* Field_1_4; // 0x28
	::Class_1_DD449B0795604250* Field_1_8; // 0x30
	::System::UInt32 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_680178D605286D96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_680178D605286D96*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_680178D605286D96* Clone()
	{
		return ((::Class_1_680178D605286D96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_3A7B270FE0BE90AE_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3A7B270FE0BE90AE_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3A7B270FE0BE90AE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_4*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_DD449B0795604250* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_DD449B0795604250*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_DD449B0795604250* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD449B0795604250*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_5D5F340EEA440344_1* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_5D5F340EEA440344_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_5D5F340EEA440344_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D5F340EEA440344_1*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_680178D605286D96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_680178D605286D96*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_680178D605286D96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_680178D605286D96*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_680178D605286D96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
