#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_69458B3547BA5011_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC6A650)
#define CLASS_1_69458B3547BA5011_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC6A060)
#define CLASS_1_69458B3547BA5011_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC6A2D0)
#define CLASS_1_69458B3547BA5011_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC6A140)
#define CLASS_1_69458B3547BA5011_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC6A460)
#define CLASS_1_69458B3547BA5011_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC6A8E0)
#define CLASS_1_69458B3547BA5011_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC6A7F0)
#define CLASS_1_69458B3547BA5011_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC6A0E0)
#define CLASS_1_69458B3547BA5011_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1CC6A100)
#define CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1CC6A130)
#define CLASS_1_69458B3547BA5011_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC69FA0)
#define CLASS_1_69458B3547BA5011_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1CC6A110)
#define CLASS_1_69458B3547BA5011_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC6A0F0)
#define CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1CC6A120)
#define CLASS_1_69458B3547BA5011_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC69FD0)
#define CLASS_1_69458B3547BA5011_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC6A4B0)
#define CLASS_1_69458B3547BA5011_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC6A510)
#define CLASS_1_69458B3547BA5011__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6AB00)
#define CLASS_1_69458B3547BA5011__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC69FF0)
#define CLASS_1_69458B3547BA5011__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC69FE0)

inline static constexpr unsigned int Class_1_69458B3547BA5011_TypeDefinitionIndex = 33257;

class Class_1_69458B3547BA5011 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69458B3547BA5011_TypeDefinitionIndex)->GetStaticField(0x18E10);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_5; // 0x18
	::System::Int64 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_69458B3547BA5011* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69458B3547BA5011*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_69458B3547BA5011* Clone()
	{
		return ((::Class_1_69458B3547BA5011*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_69458B3547BA5011* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_69458B3547BA5011*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_69458B3547BA5011* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69458B3547BA5011*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_MERGEFROM_1_OFFSET))(this, a1);
	}
};
