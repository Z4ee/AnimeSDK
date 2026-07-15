#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_301_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFE7C80)
#define CLASS_1_D17272E82AE804C2_301_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFE7890)
#define CLASS_1_D17272E82AE804C2_301_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFE79F0)
#define CLASS_1_D17272E82AE804C2_301_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFE7970)
#define CLASS_1_D17272E82AE804C2_301_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFE7AC0)
#define CLASS_1_D17272E82AE804C2_301_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFE7E60)
#define CLASS_1_D17272E82AE804C2_301_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFE7E10)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CFE7930)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CFE7950)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CFE7910)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CFE77D0)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CFE7940)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CFE7960)
#define CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CFE7920)
#define CLASS_1_D17272E82AE804C2_301_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFE7830)
#define CLASS_1_D17272E82AE804C2_301_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFE7AF0)
#define CLASS_1_D17272E82AE804C2_301_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFE7B50)
#define CLASS_1_D17272E82AE804C2_301__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFE8000)
#define CLASS_1_D17272E82AE804C2_301__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFE7850)
#define CLASS_1_D17272E82AE804C2_301__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE7840)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_301_TypeDefinitionIndex = 26907;

class Class_1_D17272E82AE804C2_301 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_301*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_301*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_301_TypeDefinitionIndex)->GetStaticField(0x2DEC0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_301*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_301*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_301*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_301* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_301*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_301* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_301*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_301*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_301_MERGEFROM_1_OFFSET))(this, a1);
	}
};
