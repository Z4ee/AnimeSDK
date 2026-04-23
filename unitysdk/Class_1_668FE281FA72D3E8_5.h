#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B8A9F0)
#define CLASS_1_668FE281FA72D3E8_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19B8A6A0)
#define CLASS_1_668FE281FA72D3E8_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B8A830)
#define CLASS_1_668FE281FA72D3E8_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B8A780)
#define CLASS_1_668FE281FA72D3E8_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B8A8A0)
#define CLASS_1_668FE281FA72D3E8_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B8AC10)
#define CLASS_1_668FE281FA72D3E8_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B8ABC0)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B8A740)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B8A720)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19B8A5E0)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19B8A770)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B8A750)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B8A730)
#define CLASS_1_668FE281FA72D3E8_5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19B8A760)
#define CLASS_1_668FE281FA72D3E8_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B8A640)
#define CLASS_1_668FE281FA72D3E8_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B8A8D0)
#define CLASS_1_668FE281FA72D3E8_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B8A930)
#define CLASS_1_668FE281FA72D3E8_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B8ACC0)
#define CLASS_1_668FE281FA72D3E8_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B8A660)
#define CLASS_1_668FE281FA72D3E8_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8A650)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_5_TypeDefinitionIndex = 25950;

class Class_1_668FE281FA72D3E8_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_5_TypeDefinitionIndex)->GetStaticField(0x4A4F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::Enum_3_96F6662CA3713095_9 Field_1_7; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_5*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_5* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_9 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_9))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_5*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_5*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
