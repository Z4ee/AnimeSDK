#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_113;
class Class_1_21C7581DFE99F091_114;
class Class_1_56A8C5147B322CD2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7E8AFD2F9BD838AC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6C9520)
#define CLASS_1_7E8AFD2F9BD838AC_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDD5240)
#define CLASS_1_7E8AFD2F9BD838AC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDD5550)
#define CLASS_1_7E8AFD2F9BD838AC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDD52F0)
#define CLASS_1_7E8AFD2F9BD838AC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDD5820)
#define CLASS_1_7E8AFD2F9BD838AC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6C9740)
#define CLASS_1_7E8AFD2F9BD838AC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6C95E0)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CDD52B0)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1CDD52D0)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CDD5290)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CDD5070)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CDD52C0)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1CDD52E0)
#define CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CDD52A0)
#define CLASS_1_7E8AFD2F9BD838AC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDD50D0)
#define CLASS_1_7E8AFD2F9BD838AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C9380)
#define CLASS_1_7E8AFD2F9BD838AC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6C93E0)
#define CLASS_1_7E8AFD2F9BD838AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C9930)
#define CLASS_1_7E8AFD2F9BD838AC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDD50F0)
#define CLASS_1_7E8AFD2F9BD838AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD50E0)

inline static constexpr unsigned int Class_1_7E8AFD2F9BD838AC_TypeDefinitionIndex = 32122;

class Class_1_7E8AFD2F9BD838AC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7E8AFD2F9BD838AC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7E8AFD2F9BD838AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E8AFD2F9BD838AC_TypeDefinitionIndex)->GetStaticField(0x62120);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_21C7581DFE99F091_113* Field_1_4; // 0x10
	::Class_1_21C7581DFE99F091_114* Field_1_5; // 0x18
	::Class_1_56A8C5147B322CD2* Field_1_6; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7E8AFD2F9BD838AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E8AFD2F9BD838AC*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7E8AFD2F9BD838AC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7E8AFD2F9BD838AC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7E8AFD2F9BD838AC* Clone()
	{
		return ((::Class_1_7E8AFD2F9BD838AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_CLONE_OFFSET))(this);
	}

	::Class_1_56A8C5147B322CD2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_56A8C5147B322CD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_56A8C5147B322CD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56A8C5147B322CD2*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_113* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21C7581DFE99F091_113*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21C7581DFE99F091_113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_113*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_114* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_21C7581DFE99F091_114*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_21C7581DFE99F091_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_114*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7E8AFD2F9BD838AC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7E8AFD2F9BD838AC*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7E8AFD2F9BD838AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E8AFD2F9BD838AC*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E8AFD2F9BD838AC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
