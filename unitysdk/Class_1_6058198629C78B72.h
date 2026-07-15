#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6058198629C78B72_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C667CD0)
#define CLASS_1_6058198629C78B72_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6677C0)
#define CLASS_1_6058198629C78B72_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6679A0)
#define CLASS_1_6058198629C78B72_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6678A0)
#define CLASS_1_6058198629C78B72_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C667AA0)
#define CLASS_1_6058198629C78B72_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C667E50)
#define CLASS_1_6058198629C78B72_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C667E00)
#define CLASS_1_6058198629C78B72_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C667830)
#define CLASS_1_6058198629C78B72_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C667820)
#define CLASS_1_6058198629C78B72_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C667890)
#define CLASS_1_6058198629C78B72_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C667730)
#define CLASS_1_6058198629C78B72_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C667880)
#define CLASS_1_6058198629C78B72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C667760)
#define CLASS_1_6058198629C78B72_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C667B70)
#define CLASS_1_6058198629C78B72_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C667BD0)
#define CLASS_1_6058198629C78B72__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C668000)
#define CLASS_1_6058198629C78B72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C667780)
#define CLASS_1_6058198629C78B72__CTOR_OFFSET UNITYSDK_OFFSET(0x1C667770)

inline static constexpr unsigned int Class_1_6058198629C78B72_TypeDefinitionIndex = 30735;

class Class_1_6058198629C78B72 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6058198629C78B72*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6058198629C78B72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6058198629C78B72_TypeDefinitionIndex)->GetStaticField(0x5A30);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::Enum_3_DB663931210BBC27_1 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6058198629C78B72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6058198629C78B72*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6058198629C78B72*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6058198629C78B72*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6058198629C78B72* Clone()
	{
		return ((::Class_1_6058198629C78B72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6058198629C78B72* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6058198629C78B72*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6058198629C78B72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6058198629C78B72*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6058198629C78B72_MERGEFROM_1_OFFSET))(this, a1);
	}
};
