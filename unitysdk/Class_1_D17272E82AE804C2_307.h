#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_307_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1925E9C0)
#define CLASS_1_D17272E82AE804C2_307_CLONE_OFFSET UNITYSDK_OFFSET(0x1925E750)
#define CLASS_1_D17272E82AE804C2_307_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1925E880)
#define CLASS_1_D17272E82AE804C2_307_EQUALS_OFFSET UNITYSDK_OFFSET(0x1925E7E0)
#define CLASS_1_D17272E82AE804C2_307_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1925E8D0)
#define CLASS_1_D17272E82AE804C2_307_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1925EA80)
#define CLASS_1_D17272E82AE804C2_307_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1925EA50)
#define CLASS_1_D17272E82AE804C2_307_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1925E7C0)
#define CLASS_1_D17272E82AE804C2_307_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1925E6A0)
#define CLASS_1_D17272E82AE804C2_307_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1925E7D0)
#define CLASS_1_D17272E82AE804C2_307_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1925E700)
#define CLASS_1_D17272E82AE804C2_307_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1925E900)
#define CLASS_1_D17272E82AE804C2_307_WRITETO_OFFSET UNITYSDK_OFFSET(0x1925E960)
#define CLASS_1_D17272E82AE804C2_307__CCTOR_OFFSET UNITYSDK_OFFSET(0x1925EAF0)
#define CLASS_1_D17272E82AE804C2_307__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1925E720)
#define CLASS_1_D17272E82AE804C2_307__CTOR_OFFSET UNITYSDK_OFFSET(0x1925E710)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_307_TypeDefinitionIndex = 26940;

class Class_1_D17272E82AE804C2_307 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_307*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_307*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_307_TypeDefinitionIndex)->GetStaticField(0x14C10);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_307*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_307*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_307*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_307* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_307*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_307* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_307*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_307*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_307_MERGEFROM_1_OFFSET))(this, a1);
	}
};
