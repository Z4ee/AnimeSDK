#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E489C7176E109E87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6659E0)
#define CLASS_1_E489C7176E109E87_CLONE_OFFSET UNITYSDK_OFFSET(0x1A665570)
#define CLASS_1_E489C7176E109E87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A665760)
#define CLASS_1_E489C7176E109E87_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A665690)
#define CLASS_1_E489C7176E109E87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A665800)
#define CLASS_1_E489C7176E109E87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A665C80)
#define CLASS_1_E489C7176E109E87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A665C20)
#define CLASS_1_E489C7176E109E87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A665670)
#define CLASS_1_E489C7176E109E87_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A665620)
#define CLASS_1_E489C7176E109E87_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A665610)
#define CLASS_1_E489C7176E109E87_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6654A0)
#define CLASS_1_E489C7176E109E87_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A665600)
#define CLASS_1_E489C7176E109E87_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A665680)
#define CLASS_1_E489C7176E109E87_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A6655F0)
#define CLASS_1_E489C7176E109E87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A665500)
#define CLASS_1_E489C7176E109E87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6658B0)
#define CLASS_1_E489C7176E109E87_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A665910)
#define CLASS_1_E489C7176E109E87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A665EC0)
#define CLASS_1_E489C7176E109E87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A665520)
#define CLASS_1_E489C7176E109E87__CTOR_OFFSET UNITYSDK_OFFSET(0x1A665510)

inline static constexpr unsigned int Class_1_E489C7176E109E87_TypeDefinitionIndex = 23825;

class Class_1_E489C7176E109E87 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E489C7176E109E87*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E489C7176E109E87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E489C7176E109E87_TypeDefinitionIndex)->GetStaticField(0x2A070);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Enum_3_A35B38E5F9115A76 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E489C7176E109E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E489C7176E109E87*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E489C7176E109E87*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E489C7176E109E87*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E489C7176E109E87* Clone()
	{
		return ((::Class_1_E489C7176E109E87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_CLONE_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E489C7176E109E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E489C7176E109E87*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E489C7176E109E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E489C7176E109E87*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E489C7176E109E87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
