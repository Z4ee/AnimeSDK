#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D0A72A0)
#define CLASS_1_1CBA230307F9C289_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0A6EE0)
#define CLASS_1_1CBA230307F9C289_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D0A7050)
#define CLASS_1_1CBA230307F9C289_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0A6F70)
#define CLASS_1_1CBA230307F9C289_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D0A7120)
#define CLASS_1_1CBA230307F9C289_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D0A7430)
#define CLASS_1_1CBA230307F9C289_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D0A73F0)
#define CLASS_1_1CBA230307F9C289_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D0A6F50)
#define CLASS_1_1CBA230307F9C289_14_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1D0A6F40)
#define CLASS_1_1CBA230307F9C289_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D0A6E60)
#define CLASS_1_1CBA230307F9C289_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D0A6F60)
#define CLASS_1_1CBA230307F9C289_14_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1D0A6F30)
#define CLASS_1_1CBA230307F9C289_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D0A6E90)
#define CLASS_1_1CBA230307F9C289_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D0A7150)
#define CLASS_1_1CBA230307F9C289_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D0A71B0)
#define CLASS_1_1CBA230307F9C289_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A75B0)
#define CLASS_1_1CBA230307F9C289_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0A6EB0)
#define CLASS_1_1CBA230307F9C289_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A6EA0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_14_TypeDefinitionIndex = 25405;

class Class_1_1CBA230307F9C289_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_14_TypeDefinitionIndex)->GetStaticField(0x3F450);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_DFCB42601400F441 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_14*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_14* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_CLONE_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_14*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_14*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
