#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_501_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CCBC0)
#define CLASS_1_D17272E82AE804C2_501_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CC7C0)
#define CLASS_1_D17272E82AE804C2_501_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CC980)
#define CLASS_1_D17272E82AE804C2_501_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CC870)
#define CLASS_1_D17272E82AE804C2_501_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CCA50)
#define CLASS_1_D17272E82AE804C2_501_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CCD10)
#define CLASS_1_D17272E82AE804C2_501_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CCCD0)
#define CLASS_1_D17272E82AE804C2_501_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5CC850)
#define CLASS_1_D17272E82AE804C2_501_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5CC830)
#define CLASS_1_D17272E82AE804C2_501_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5CC710)
#define CLASS_1_D17272E82AE804C2_501_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5CC860)
#define CLASS_1_D17272E82AE804C2_501_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5CC840)
#define CLASS_1_D17272E82AE804C2_501_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC770)
#define CLASS_1_D17272E82AE804C2_501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CCA80)
#define CLASS_1_D17272E82AE804C2_501_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CCAE0)
#define CLASS_1_D17272E82AE804C2_501__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CCE90)
#define CLASS_1_D17272E82AE804C2_501__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CC790)
#define CLASS_1_D17272E82AE804C2_501__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC780)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_501_TypeDefinitionIndex = 29417;

class Class_1_D17272E82AE804C2_501 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_501*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_501*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_501_TypeDefinitionIndex)->GetStaticField(0x3F230);
	}
	// static const ::System::Int32 AFKPGOJFAFJ = 0x8; // 0x0
	// static const ::System::Int32 MIFCIPEBBEN = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HIOHMLINHPC; // 0x18
	::System::UInt32 BJCGANEHKEO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_501* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_501*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_501*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_501*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_501* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_501*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_501* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_501*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_501* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_501*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_501_MERGEFROM_1_OFFSET))(this, a1);
	}
};
