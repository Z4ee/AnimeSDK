#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FBDFBC4C2F16CDD1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_57_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19603A00)
#define CLASS_1_355A2207C3B7A99D_57_CLONE_OFFSET UNITYSDK_OFFSET(0x196036B0)
#define CLASS_1_355A2207C3B7A99D_57_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19603830)
#define CLASS_1_355A2207C3B7A99D_57_EQUALS_OFFSET UNITYSDK_OFFSET(0x19603780)
#define CLASS_1_355A2207C3B7A99D_57_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196038D0)
#define CLASS_1_355A2207C3B7A99D_57_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19603B20)
#define CLASS_1_355A2207C3B7A99D_57_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19603A60)
#define CLASS_1_355A2207C3B7A99D_57_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19603760)
#define CLASS_1_355A2207C3B7A99D_57_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x196035C0)
#define CLASS_1_355A2207C3B7A99D_57_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19603770)
#define CLASS_1_355A2207C3B7A99D_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196035F0)
#define CLASS_1_355A2207C3B7A99D_57_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19603940)
#define CLASS_1_355A2207C3B7A99D_57_WRITETO_OFFSET UNITYSDK_OFFSET(0x196039A0)
#define CLASS_1_355A2207C3B7A99D_57__CCTOR_OFFSET UNITYSDK_OFFSET(0x19603BD0)
#define CLASS_1_355A2207C3B7A99D_57__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19603610)
#define CLASS_1_355A2207C3B7A99D_57__CTOR_OFFSET UNITYSDK_OFFSET(0x19603600)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_57_TypeDefinitionIndex = 29442;

class Class_1_355A2207C3B7A99D_57 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_57*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_57_TypeDefinitionIndex)->GetStaticField(0x5B4A0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_FBDFBC4C2F16CDD1* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_57*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_57*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_57*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_57* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_57*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_CLONE_OFFSET))(this);
	}

	::Class_1_FBDFBC4C2F16CDD1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FBDFBC4C2F16CDD1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FBDFBC4C2F16CDD1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_57* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_57*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_57*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_57_MERGEFROM_1_OFFSET))(this, a1);
	}
};
