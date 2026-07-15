#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_88EBDD9953F3B5A7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF66D10)
#define CLASS_1_88EBDD9953F3B5A7_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF66700)
#define CLASS_1_88EBDD9953F3B5A7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF66990)
#define CLASS_1_88EBDD9953F3B5A7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF66800)
#define CLASS_1_88EBDD9953F3B5A7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF66B20)
#define CLASS_1_88EBDD9953F3B5A7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF66F50)
#define CLASS_1_88EBDD9953F3B5A7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF66EB0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF667E0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CF667C0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1CF667B0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF66620)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF667F0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1CF667A0)
#define CLASS_1_88EBDD9953F3B5A7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CF667D0)
#define CLASS_1_88EBDD9953F3B5A7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF66650)
#define CLASS_1_88EBDD9953F3B5A7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF66B70)
#define CLASS_1_88EBDD9953F3B5A7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF66BD0)
#define CLASS_1_88EBDD9953F3B5A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF67110)
#define CLASS_1_88EBDD9953F3B5A7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF66670)
#define CLASS_1_88EBDD9953F3B5A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF66660)

inline static constexpr unsigned int Class_1_88EBDD9953F3B5A7_TypeDefinitionIndex = 33253;

class Class_1_88EBDD9953F3B5A7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_88EBDD9953F3B5A7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_88EBDD9953F3B5A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88EBDD9953F3B5A7_TypeDefinitionIndex)->GetStaticField(0x32870);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Class_1_87FFBB414BD751E4_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::Int64 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_88EBDD9953F3B5A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_88EBDD9953F3B5A7*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_88EBDD9953F3B5A7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_88EBDD9953F3B5A7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_88EBDD9953F3B5A7* Clone()
	{
		return ((::Class_1_88EBDD9953F3B5A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Class_1_87FFBB414BD751E4_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_87FFBB414BD751E4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_87FFBB414BD751E4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87FFBB414BD751E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_88EBDD9953F3B5A7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_88EBDD9953F3B5A7*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_88EBDD9953F3B5A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_88EBDD9953F3B5A7*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_88EBDD9953F3B5A7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
