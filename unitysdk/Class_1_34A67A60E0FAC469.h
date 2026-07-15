#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8844A4E6AE686D5C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_34A67A60E0FAC469_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6DADB0)
#define CLASS_1_34A67A60E0FAC469_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6DA7D0)
#define CLASS_1_34A67A60E0FAC469_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6DAA80)
#define CLASS_1_34A67A60E0FAC469_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6DA8C0)
#define CLASS_1_34A67A60E0FAC469_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6DAC00)
#define CLASS_1_34A67A60E0FAC469_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6DAEF0)
#define CLASS_1_34A67A60E0FAC469_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6DAE10)
#define CLASS_1_34A67A60E0FAC469_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C6DA880)
#define CLASS_1_34A67A60E0FAC469_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C6DA6D0)
#define CLASS_1_34A67A60E0FAC469_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C6DA890)
#define CLASS_1_34A67A60E0FAC469_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C6DA8B0)
#define CLASS_1_34A67A60E0FAC469_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C6DA8A0)
#define CLASS_1_34A67A60E0FAC469_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6DA730)
#define CLASS_1_34A67A60E0FAC469_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6DAC40)
#define CLASS_1_34A67A60E0FAC469_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6DACA0)
#define CLASS_1_34A67A60E0FAC469__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6DB0F0)
#define CLASS_1_34A67A60E0FAC469__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6DA750)
#define CLASS_1_34A67A60E0FAC469__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DA740)

inline static constexpr unsigned int Class_1_34A67A60E0FAC469_TypeDefinitionIndex = 26464;

class Class_1_34A67A60E0FAC469 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34A67A60E0FAC469_TypeDefinitionIndex)->GetStaticField(0x62D60);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Class_1_8844A4E6AE686D5C* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_34A67A60E0FAC469* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_34A67A60E0FAC469* Clone()
	{
		return ((::Class_1_34A67A60E0FAC469*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_CLONE_OFFSET))(this);
	}

	::Class_1_8844A4E6AE686D5C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8844A4E6AE686D5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8844A4E6AE686D5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_34A67A60E0FAC469* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_34A67A60E0FAC469*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_34A67A60E0FAC469* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_MERGEFROM_1_OFFSET))(this, a1);
	}
};
