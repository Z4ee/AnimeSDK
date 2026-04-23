#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_431_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19429470)
#define CLASS_1_D17272E82AE804C2_431_CLONE_OFFSET UNITYSDK_OFFSET(0x19429200)
#define CLASS_1_D17272E82AE804C2_431_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19429330)
#define CLASS_1_D17272E82AE804C2_431_EQUALS_OFFSET UNITYSDK_OFFSET(0x19429290)
#define CLASS_1_D17272E82AE804C2_431_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19429380)
#define CLASS_1_D17272E82AE804C2_431_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19429530)
#define CLASS_1_D17272E82AE804C2_431_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19429500)
#define CLASS_1_D17272E82AE804C2_431_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19429270)
#define CLASS_1_D17272E82AE804C2_431_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19429150)
#define CLASS_1_D17272E82AE804C2_431_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19429280)
#define CLASS_1_D17272E82AE804C2_431_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194291B0)
#define CLASS_1_D17272E82AE804C2_431_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194293B0)
#define CLASS_1_D17272E82AE804C2_431_WRITETO_OFFSET UNITYSDK_OFFSET(0x19429410)
#define CLASS_1_D17272E82AE804C2_431__CCTOR_OFFSET UNITYSDK_OFFSET(0x194295A0)
#define CLASS_1_D17272E82AE804C2_431__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194291D0)
#define CLASS_1_D17272E82AE804C2_431__CTOR_OFFSET UNITYSDK_OFFSET(0x194291C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_431_TypeDefinitionIndex = 27829;

class Class_1_D17272E82AE804C2_431 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_431*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_431*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_431_TypeDefinitionIndex)->GetStaticField(0x45B10);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_431* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_431*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_431*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_431*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_431* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_431*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_431* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_431*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_431* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_431*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_431_MERGEFROM_1_OFFSET))(this, a1);
	}
};
