#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_418_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C90B940)
#define CLASS_1_D17272E82AE804C2_418_CLONE_OFFSET UNITYSDK_OFFSET(0x1C90B530)
#define CLASS_1_D17272E82AE804C2_418_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C90B6C0)
#define CLASS_1_D17272E82AE804C2_418_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C90B5C0)
#define CLASS_1_D17272E82AE804C2_418_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C90B830)
#define CLASS_1_D17272E82AE804C2_418_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C90BA00)
#define CLASS_1_D17272E82AE804C2_418_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C90B9D0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C90B5A0)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C90B480)
#define CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C90B5B0)
#define CLASS_1_D17272E82AE804C2_418_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C90B4E0)
#define CLASS_1_D17272E82AE804C2_418_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C90B860)
#define CLASS_1_D17272E82AE804C2_418_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C90B8C0)
#define CLASS_1_D17272E82AE804C2_418__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C90BB60)
#define CLASS_1_D17272E82AE804C2_418__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C90B500)
#define CLASS_1_D17272E82AE804C2_418__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90B4F0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_418_TypeDefinitionIndex = 27942;

class Class_1_D17272E82AE804C2_418 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_418_TypeDefinitionIndex)->GetStaticField(0x558F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_418*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_418* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_418*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_418*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_418_MERGEFROM_1_OFFSET))(this, a1);
	}
};
