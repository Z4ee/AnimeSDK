#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_31.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_97_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C34F8C0)
#define CLASS_1_1CBA230307F9C289_97_CLONE_OFFSET UNITYSDK_OFFSET(0x1C34F4B0)
#define CLASS_1_1CBA230307F9C289_97_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C34F670)
#define CLASS_1_1CBA230307F9C289_97_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C34F560)
#define CLASS_1_1CBA230307F9C289_97_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C34F740)
#define CLASS_1_1CBA230307F9C289_97_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C34FA50)
#define CLASS_1_1CBA230307F9C289_97_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C34FA10)
#define CLASS_1_1CBA230307F9C289_97_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C34F540)
#define CLASS_1_1CBA230307F9C289_97_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C34F400)
#define CLASS_1_1CBA230307F9C289_97_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C34F530)
#define CLASS_1_1CBA230307F9C289_97_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C34F550)
#define CLASS_1_1CBA230307F9C289_97_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C34F520)
#define CLASS_1_1CBA230307F9C289_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C34F460)
#define CLASS_1_1CBA230307F9C289_97_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C34F770)
#define CLASS_1_1CBA230307F9C289_97_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C34F7D0)
#define CLASS_1_1CBA230307F9C289_97__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C34FBD0)
#define CLASS_1_1CBA230307F9C289_97__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C34F480)
#define CLASS_1_1CBA230307F9C289_97__CTOR_OFFSET UNITYSDK_OFFSET(0x1C34F470)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_97_TypeDefinitionIndex = 32923;

class Class_1_1CBA230307F9C289_97 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_97*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_97_TypeDefinitionIndex)->GetStaticField(0x21130);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Enum_3_96F6662CA3713095_31 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_97*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_97*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_97*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_97* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_97*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_CLONE_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_31 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_31(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_31 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_31))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_97*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_97*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_97_MERGEFROM_1_OFFSET))(this, a1);
	}
};
