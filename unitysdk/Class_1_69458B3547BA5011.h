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

#define CLASS_1_69458B3547BA5011_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5C2070)
#define CLASS_1_69458B3547BA5011_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5C1BE0)
#define CLASS_1_69458B3547BA5011_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5C1E10)
#define CLASS_1_69458B3547BA5011_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5C1D20)
#define CLASS_1_69458B3547BA5011_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5C1ED0)
#define CLASS_1_69458B3547BA5011_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5C23D0)
#define CLASS_1_69458B3547BA5011_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5C22D0)
#define CLASS_1_69458B3547BA5011_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5C1CE0)
#define CLASS_1_69458B3547BA5011_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1A5C1D00)
#define CLASS_1_69458B3547BA5011_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5C1AE0)
#define CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1A5C1CD0)
#define CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A5C1CB0)
#define CLASS_1_69458B3547BA5011_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1A5C1D10)
#define CLASS_1_69458B3547BA5011_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5C1CF0)
#define CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1A5C1CC0)
#define CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A5C1CA0)
#define CLASS_1_69458B3547BA5011_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5C1B40)
#define CLASS_1_69458B3547BA5011_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5C1F40)
#define CLASS_1_69458B3547BA5011_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5C1FA0)
#define CLASS_1_69458B3547BA5011__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C2510)
#define CLASS_1_69458B3547BA5011__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5C1B60)
#define CLASS_1_69458B3547BA5011__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C1B50)

inline static constexpr unsigned int Class_1_69458B3547BA5011_TypeDefinitionIndex = 32881;

class Class_1_69458B3547BA5011 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69458B3547BA5011_TypeDefinitionIndex)->GetStaticField(0x17C90);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Proto::PlayerSimpleInfo* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Int64 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::Int64 Field_1_9; // 0x30

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_69458B3547BA5011*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_69458B3547BA5011* Clone()
	{
		return ((::Class_1_69458B3547BA5011*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_69458B3547BA5011_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
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
