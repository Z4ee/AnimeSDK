#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E_1.h"
#include "unitysdk/Enum_3_96F6662CA3713095_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_345F35FB82AA21D7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F12680)
#define CLASS_1_345F35FB82AA21D7_CLONE_OFFSET UNITYSDK_OFFSET(0x17F12260)
#define CLASS_1_345F35FB82AA21D7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F12380)
#define CLASS_1_345F35FB82AA21D7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F12320)
#define CLASS_1_345F35FB82AA21D7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F12450)
#define CLASS_1_345F35FB82AA21D7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F12970)
#define CLASS_1_345F35FB82AA21D7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F128B0)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F122F0)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F122B0)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x17F12310)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F122E0)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F12300)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F122C0)
#define CLASS_1_345F35FB82AA21D7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F122D0)
#define CLASS_1_345F35FB82AA21D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F12170)
#define CLASS_1_345F35FB82AA21D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F124D0)
#define CLASS_1_345F35FB82AA21D7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F12530)
#define CLASS_1_345F35FB82AA21D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F12A80)
#define CLASS_1_345F35FB82AA21D7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F121C0)
#define CLASS_1_345F35FB82AA21D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F12180)

inline static constexpr unsigned int Class_1_345F35FB82AA21D7_TypeDefinitionIndex = 23461;

class Class_1_345F35FB82AA21D7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_84F790F6B4BFF34E_1>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_84F790F6B4BFF34E_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_345F35FB82AA21D7_TypeDefinitionIndex)->GetStaticField(0x30400);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_96F6662CA3713095_4 Field_1_4; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_345F35FB82AA21D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_345F35FB82AA21D7*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_345F35FB82AA21D7* Clone()
	{
		return ((::Class_1_345F35FB82AA21D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_4))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_84F790F6B4BFF34E_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_345F35FB82AA21D7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_345F35FB82AA21D7*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_345F35FB82AA21D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_345F35FB82AA21D7*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_345F35FB82AA21D7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
