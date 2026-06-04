#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AE784B0D4E05F70E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A472D90)
#define CLASS_1_AE784B0D4E05F70E_CLONE_OFFSET UNITYSDK_OFFSET(0x1A472A90)
#define CLASS_1_AE784B0D4E05F70E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A472BF0)
#define CLASS_1_AE784B0D4E05F70E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A472B40)
#define CLASS_1_AE784B0D4E05F70E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A472C50)
#define CLASS_1_AE784B0D4E05F70E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A472F90)
#define CLASS_1_AE784B0D4E05F70E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A472F50)
#define CLASS_1_AE784B0D4E05F70E_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A4729E0)
#define CLASS_1_AE784B0D4E05F70E_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1A472B30)
#define CLASS_1_AE784B0D4E05F70E_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A472B10)
#define CLASS_1_AE784B0D4E05F70E_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1A472B20)
#define CLASS_1_AE784B0D4E05F70E_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A472B00)
#define CLASS_1_AE784B0D4E05F70E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A472A40)
#define CLASS_1_AE784B0D4E05F70E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A472CB0)
#define CLASS_1_AE784B0D4E05F70E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A472D10)
#define CLASS_1_AE784B0D4E05F70E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A473110)
#define CLASS_1_AE784B0D4E05F70E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A472A60)
#define CLASS_1_AE784B0D4E05F70E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A472A50)

inline static constexpr unsigned int Class_1_AE784B0D4E05F70E_TypeDefinitionIndex = 27507;

class Class_1_AE784B0D4E05F70E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE784B0D4E05F70E_TypeDefinitionIndex)->GetStaticField(0x147F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Int64 Field_1_4; // 0x18
	::System::Int64 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AE784B0D4E05F70E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE784B0D4E05F70E*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AE784B0D4E05F70E* Clone()
	{
		return ((::Class_1_AE784B0D4E05F70E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AE784B0D4E05F70E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE784B0D4E05F70E*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AE784B0D4E05F70E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE784B0D4E05F70E*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
