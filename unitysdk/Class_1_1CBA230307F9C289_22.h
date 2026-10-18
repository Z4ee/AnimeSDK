#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_12.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D7F70)
#define CLASS_1_1CBA230307F9C289_22_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D7B50)
#define CLASS_1_1CBA230307F9C289_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D7CB0)
#define CLASS_1_1CBA230307F9C289_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D7C30)
#define CLASS_1_1CBA230307F9C289_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D7D80)
#define CLASS_1_1CBA230307F9C289_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D8190)
#define CLASS_1_1CBA230307F9C289_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D8140)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5D7C10)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5D7BD0)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5D7A90)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E5D7C00)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5D7C20)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5D7BE0)
#define CLASS_1_1CBA230307F9C289_22_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E5D7BF0)
#define CLASS_1_1CBA230307F9C289_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7AF0)
#define CLASS_1_1CBA230307F9C289_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D7DB0)
#define CLASS_1_1CBA230307F9C289_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D7E10)
#define CLASS_1_1CBA230307F9C289_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D8330)
#define CLASS_1_1CBA230307F9C289_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D7B10)
#define CLASS_1_1CBA230307F9C289_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7B00)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_22_TypeDefinitionIndex = 27549;

class Class_1_1CBA230307F9C289_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_22*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_22_TypeDefinitionIndex)->GetStaticField(0x4B190);
	}
	// static const ::System::Int32 BOAPCKOBCAG = 0xD; // 0x0
	// static const ::System::Int32 EDHJDCGBECJ = 0x2; // 0x0
	// static const ::System::Int32 GFKBGAHAJKB = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HMBHGBPHAEJ; // 0x18
	::Enum_3_96F6662CA3713095_12 OHFNMGCGAGG; // 0x1C
	::System::UInt32 MJOJMKNAEFF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_22*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_22*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_22*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_22* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_12 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_12 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_12))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_22*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_22*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
