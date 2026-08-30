#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_516_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FC6A0)
#define CLASS_1_D17272E82AE804C2_516_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FC290)
#define CLASS_1_D17272E82AE804C2_516_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FC420)
#define CLASS_1_D17272E82AE804C2_516_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FC320)
#define CLASS_1_D17272E82AE804C2_516_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FC590)
#define CLASS_1_D17272E82AE804C2_516_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FC760)
#define CLASS_1_D17272E82AE804C2_516_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FC730)
#define CLASS_1_D17272E82AE804C2_516_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E1FC300)
#define CLASS_1_D17272E82AE804C2_516_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E1FC1E0)
#define CLASS_1_D17272E82AE804C2_516_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E1FC310)
#define CLASS_1_D17272E82AE804C2_516_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FC240)
#define CLASS_1_D17272E82AE804C2_516_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FC5C0)
#define CLASS_1_D17272E82AE804C2_516_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FC620)
#define CLASS_1_D17272E82AE804C2_516__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FC8C0)
#define CLASS_1_D17272E82AE804C2_516__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FC260)
#define CLASS_1_D17272E82AE804C2_516__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FC250)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_516_TypeDefinitionIndex = 29059;

class Class_1_D17272E82AE804C2_516 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_516*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_516*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_516_TypeDefinitionIndex)->GetStaticField(0x366E0);
	}
	// static const ::System::Int32 JOFGMGPBGFM = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 KECMHCOJCKI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_516* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_516*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_516*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_516*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_516* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_516*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_516* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_516*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_516* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_516*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_516_MERGEFROM_1_OFFSET))(this, a1);
	}
};
