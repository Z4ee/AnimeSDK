#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_68168894A9D2D702_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C1E9260)
#define CLASS_1_68168894A9D2D702_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1C1E8C80)
#define CLASS_1_68168894A9D2D702_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C1E8ED0)
#define CLASS_1_68168894A9D2D702_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C1E8DA0)
#define CLASS_1_68168894A9D2D702_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C1E9060)
#define CLASS_1_68168894A9D2D702_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C1E94B0)
#define CLASS_1_68168894A9D2D702_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C1E93F0)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C1E8D80)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C1E8D60)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C1E8B70)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C1E8D50)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C1E8D90)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C1E8D70)
#define CLASS_1_68168894A9D2D702_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C1E8D40)
#define CLASS_1_68168894A9D2D702_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C1E8BD0)
#define CLASS_1_68168894A9D2D702_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1E90A0)
#define CLASS_1_68168894A9D2D702_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C1E9100)
#define CLASS_1_68168894A9D2D702_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E96A0)
#define CLASS_1_68168894A9D2D702_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1E8BF0)
#define CLASS_1_68168894A9D2D702_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E8BE0)

inline static constexpr unsigned int Class_1_68168894A9D2D702_4_TypeDefinitionIndex = 29179;

class Class_1_68168894A9D2D702_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68168894A9D2D702_4_TypeDefinitionIndex)->GetStaticField(0x472D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Class_1_7B005A18003A04C3* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Enum_3_63C076C405BE0674_1 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_68168894A9D2D702_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702_4*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_68168894A9D2D702_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_68168894A9D2D702_4* Clone()
	{
		return ((::Class_1_68168894A9D2D702_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_CLONE_OFFSET))(this);
	}

	::Enum_3_63C076C405BE0674_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63C076C405BE0674_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63C076C405BE0674_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_7B005A18003A04C3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_68168894A9D2D702_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_68168894A9D2D702_4*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_68168894A9D2D702_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68168894A9D2D702_4*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_68168894A9D2D702_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
