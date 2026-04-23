#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35C4631AD9C32CA1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_114_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199FDC90)
#define CLASS_1_355A2207C3B7A99D_114_CLONE_OFFSET UNITYSDK_OFFSET(0x199FD940)
#define CLASS_1_355A2207C3B7A99D_114_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199FDAE0)
#define CLASS_1_355A2207C3B7A99D_114_EQUALS_OFFSET UNITYSDK_OFFSET(0x199FDA10)
#define CLASS_1_355A2207C3B7A99D_114_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199FDB80)
#define CLASS_1_355A2207C3B7A99D_114_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199FDDC0)
#define CLASS_1_355A2207C3B7A99D_114_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199FDCF0)
#define CLASS_1_355A2207C3B7A99D_114_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x199FD9F0)
#define CLASS_1_355A2207C3B7A99D_114_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x199FD850)
#define CLASS_1_355A2207C3B7A99D_114_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x199FDA00)
#define CLASS_1_355A2207C3B7A99D_114_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199FD8B0)
#define CLASS_1_355A2207C3B7A99D_114_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199FDBD0)
#define CLASS_1_355A2207C3B7A99D_114_WRITETO_OFFSET UNITYSDK_OFFSET(0x199FDC30)
#define CLASS_1_355A2207C3B7A99D_114__CCTOR_OFFSET UNITYSDK_OFFSET(0x199FDEE0)
#define CLASS_1_355A2207C3B7A99D_114__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199FD8D0)
#define CLASS_1_355A2207C3B7A99D_114__CTOR_OFFSET UNITYSDK_OFFSET(0x199FD8C0)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_114_TypeDefinitionIndex = 32748;

class Class_1_355A2207C3B7A99D_114 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_114*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_114*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_114_TypeDefinitionIndex)->GetStaticField(0x68EB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Class_1_35C4631AD9C32CA1* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_114*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_114*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_114*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_114* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_114*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_CLONE_OFFSET))(this);
	}

	::Class_1_35C4631AD9C32CA1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_35C4631AD9C32CA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_35C4631AD9C32CA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35C4631AD9C32CA1*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_114* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_114*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_114*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_114_MERGEFROM_1_OFFSET))(this, a1);
	}
};
