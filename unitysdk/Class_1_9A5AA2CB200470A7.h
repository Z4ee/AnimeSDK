#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_23.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9A5AA2CB200470A7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18184C80)
#define CLASS_1_9A5AA2CB200470A7_CLONE_OFFSET UNITYSDK_OFFSET(0x181848C0)
#define CLASS_1_9A5AA2CB200470A7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18184990)
#define CLASS_1_9A5AA2CB200470A7_EQUALS_OFFSET UNITYSDK_OFFSET(0x18184960)
#define CLASS_1_9A5AA2CB200470A7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18184A60)
#define CLASS_1_9A5AA2CB200470A7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18184F50)
#define CLASS_1_9A5AA2CB200470A7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18184EC0)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18184940)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181848F0)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_2173B7DC51E1A95B_OFFSET UNITYSDK_OFFSET(0x18184930)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18184920)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18184950)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18184900)
#define CLASS_1_9A5AA2CB200470A7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18184910)
#define CLASS_1_9A5AA2CB200470A7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181847D0)
#define CLASS_1_9A5AA2CB200470A7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18184AE0)
#define CLASS_1_9A5AA2CB200470A7_WRITETO_OFFSET UNITYSDK_OFFSET(0x18184B40)
#define CLASS_1_9A5AA2CB200470A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x18185040)
#define CLASS_1_9A5AA2CB200470A7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18184820)
#define CLASS_1_9A5AA2CB200470A7__CTOR_OFFSET UNITYSDK_OFFSET(0x181847E0)

inline static constexpr unsigned int Class_1_9A5AA2CB200470A7_TypeDefinitionIndex = 26832;

class Class_1_9A5AA2CB200470A7 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Double>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A5AA2CB200470A7_TypeDefinitionIndex)->GetStaticField(0xC610);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>* Field_1_7; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::Enum_3_ED790DAC948A65A9_23 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9A5AA2CB200470A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A5AA2CB200470A7*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9A5AA2CB200470A7* Clone()
	{
		return ((::Class_1_9A5AA2CB200470A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>* Method_1_2173B7DC51E1A95B()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_2173B7DC51E1A95B_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9A5AA2CB200470A7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9A5AA2CB200470A7*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9A5AA2CB200470A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A5AA2CB200470A7*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A5AA2CB200470A7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
