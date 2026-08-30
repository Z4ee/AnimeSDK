#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_504_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E93B0)
#define CLASS_1_D17272E82AE804C2_504_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E8FA0)
#define CLASS_1_D17272E82AE804C2_504_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E9130)
#define CLASS_1_D17272E82AE804C2_504_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E9030)
#define CLASS_1_D17272E82AE804C2_504_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E92A0)
#define CLASS_1_D17272E82AE804C2_504_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E9470)
#define CLASS_1_D17272E82AE804C2_504_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E9440)
#define CLASS_1_D17272E82AE804C2_504_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0E9010)
#define CLASS_1_D17272E82AE804C2_504_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0E8EF0)
#define CLASS_1_D17272E82AE804C2_504_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E0E9020)
#define CLASS_1_D17272E82AE804C2_504_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8F50)
#define CLASS_1_D17272E82AE804C2_504_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E92D0)
#define CLASS_1_D17272E82AE804C2_504_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E9330)
#define CLASS_1_D17272E82AE804C2_504__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E95D0)
#define CLASS_1_D17272E82AE804C2_504__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E8F70)
#define CLASS_1_D17272E82AE804C2_504__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8F60)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_504_TypeDefinitionIndex = 29006;

class Class_1_D17272E82AE804C2_504 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_504*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_504*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_504_TypeDefinitionIndex)->GetStaticField(0x14F90);
	}
	// static const ::System::Int32 BNOAAFKEGPM = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 JAGHCNDDGFK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_504* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_504*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_504*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_504*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_504* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_504*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_504* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_504*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_504* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_504*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_504_MERGEFROM_1_OFFSET))(this, a1);
	}
};
