#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AAD758991493C37_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6E7F70)
#define CLASS_1_9AAD758991493C37_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6E7C80)
#define CLASS_1_9AAD758991493C37_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6E7DA0)
#define CLASS_1_9AAD758991493C37_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6E7D30)
#define CLASS_1_9AAD758991493C37_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6E7E10)
#define CLASS_1_9AAD758991493C37_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6E81E0)
#define CLASS_1_9AAD758991493C37_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6E8190)
#define CLASS_1_9AAD758991493C37_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6E7D10)
#define CLASS_1_9AAD758991493C37_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A6E7CE0)
#define CLASS_1_9AAD758991493C37_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A6E7D00)
#define CLASS_1_9AAD758991493C37_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A6E7BF0)
#define CLASS_1_9AAD758991493C37_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6E7D20)
#define CLASS_1_9AAD758991493C37_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A6E7CF0)
#define CLASS_1_9AAD758991493C37_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A6E7CD0)
#define CLASS_1_9AAD758991493C37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6E7C20)
#define CLASS_1_9AAD758991493C37_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6E7E50)
#define CLASS_1_9AAD758991493C37_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6E7EB0)
#define CLASS_1_9AAD758991493C37__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6E8380)
#define CLASS_1_9AAD758991493C37__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6E7C40)
#define CLASS_1_9AAD758991493C37__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E7C30)

inline static constexpr unsigned int Class_1_9AAD758991493C37_TypeDefinitionIndex = 28930;

class Class_1_9AAD758991493C37 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AAD758991493C37*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AAD758991493C37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AAD758991493C37_TypeDefinitionIndex)->GetStaticField(0x18E90);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Int64 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_DB663931210BBC27_29 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AAD758991493C37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAD758991493C37*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AAD758991493C37*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AAD758991493C37*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AAD758991493C37* Clone()
	{
		return ((::Class_1_9AAD758991493C37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_29 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_29(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_29 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_29))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AAD758991493C37* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAD758991493C37*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AAD758991493C37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAD758991493C37*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AAD758991493C37_MERGEFROM_1_OFFSET))(this, a1);
	}
};
