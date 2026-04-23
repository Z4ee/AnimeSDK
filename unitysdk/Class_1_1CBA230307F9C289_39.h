#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_47.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19279E20)
#define CLASS_1_1CBA230307F9C289_39_CLONE_OFFSET UNITYSDK_OFFSET(0x19279BA0)
#define CLASS_1_1CBA230307F9C289_39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19279CA0)
#define CLASS_1_1CBA230307F9C289_39_EQUALS_OFFSET UNITYSDK_OFFSET(0x19279C30)
#define CLASS_1_1CBA230307F9C289_39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19279D00)
#define CLASS_1_1CBA230307F9C289_39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19279FB0)
#define CLASS_1_1CBA230307F9C289_39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19279F70)
#define CLASS_1_1CBA230307F9C289_39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19279C10)
#define CLASS_1_1CBA230307F9C289_39_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19279C00)
#define CLASS_1_1CBA230307F9C289_39_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19279B20)
#define CLASS_1_1CBA230307F9C289_39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19279C20)
#define CLASS_1_1CBA230307F9C289_39_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19279BF0)
#define CLASS_1_1CBA230307F9C289_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19279B50)
#define CLASS_1_1CBA230307F9C289_39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19279D30)
#define CLASS_1_1CBA230307F9C289_39_WRITETO_OFFSET UNITYSDK_OFFSET(0x19279D90)
#define CLASS_1_1CBA230307F9C289_39__CCTOR_OFFSET UNITYSDK_OFFSET(0x1927A030)
#define CLASS_1_1CBA230307F9C289_39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19279B70)
#define CLASS_1_1CBA230307F9C289_39__CTOR_OFFSET UNITYSDK_OFFSET(0x19279B60)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_39_TypeDefinitionIndex = 29502;

class Class_1_1CBA230307F9C289_39 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_39*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_39_TypeDefinitionIndex)->GetStaticField(0x15DD0);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DB663931210BBC27_47 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_39*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_39*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_39*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_39* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_47 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_47(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_47 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_47))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_39*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_39*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
