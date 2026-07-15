#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
class Class_1_BB4B99DE4C2501EC_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_241616E9F3BB2A75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7444B0)
#define CLASS_1_241616E9F3BB2A75_CLONE_OFFSET UNITYSDK_OFFSET(0x1C743D70)
#define CLASS_1_241616E9F3BB2A75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7440E0)
#define CLASS_1_241616E9F3BB2A75_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C743E90)
#define CLASS_1_241616E9F3BB2A75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C744310)
#define CLASS_1_241616E9F3BB2A75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C744600)
#define CLASS_1_241616E9F3BB2A75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C744540)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C743E70)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C743E50)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C743C50)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C743E80)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C743E60)
#define CLASS_1_241616E9F3BB2A75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C743CB0)
#define CLASS_1_241616E9F3BB2A75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C744370)
#define CLASS_1_241616E9F3BB2A75_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C7443D0)
#define CLASS_1_241616E9F3BB2A75__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7447D0)
#define CLASS_1_241616E9F3BB2A75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C743CD0)
#define CLASS_1_241616E9F3BB2A75__CTOR_OFFSET UNITYSDK_OFFSET(0x1C743CC0)

inline static constexpr unsigned int Class_1_241616E9F3BB2A75_TypeDefinitionIndex = 26106;

class Class_1_241616E9F3BB2A75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_241616E9F3BB2A75_TypeDefinitionIndex)->GetStaticField(0x5FFE0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_BB4B99DE4C2501EC_6* Field_1_4; // 0x18
	::Class_1_21DCD4640D389503_16* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_241616E9F3BB2A75* Clone()
	{
		return ((::Class_1_241616E9F3BB2A75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_CLONE_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BB4B99DE4C2501EC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_16* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
