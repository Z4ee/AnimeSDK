#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_719_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D55E0)
#define CLASS_1_D17272E82AE804C2_719_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D51F0)
#define CLASS_1_D17272E82AE804C2_719_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D5350)
#define CLASS_1_D17272E82AE804C2_719_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D52D0)
#define CLASS_1_D17272E82AE804C2_719_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D5420)
#define CLASS_1_D17272E82AE804C2_719_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D57C0)
#define CLASS_1_D17272E82AE804C2_719_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D5770)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E2D5290)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E2D52B0)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E2D5270)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E2D5130)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E2D52A0)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E2D52C0)
#define CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E2D5280)
#define CLASS_1_D17272E82AE804C2_719_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D5190)
#define CLASS_1_D17272E82AE804C2_719_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D5450)
#define CLASS_1_D17272E82AE804C2_719_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D54B0)
#define CLASS_1_D17272E82AE804C2_719__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D5960)
#define CLASS_1_D17272E82AE804C2_719__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D51B0)
#define CLASS_1_D17272E82AE804C2_719__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D51A0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_719_TypeDefinitionIndex = 30528;

class Class_1_D17272E82AE804C2_719 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_719*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_719*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_719_TypeDefinitionIndex)->GetStaticField(0x2ACD0);
	}
	// static const ::System::Int32 LMFHJFMIJJL = 0x8; // 0x0
	// static const ::System::Int32 PPMNDLLOGCG = 0x6; // 0x0
	// static const ::System::Int32 PIACMPBJOIK = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HGPAHCMJOLA; // 0x18
	::System::UInt32 KJAENGKDFJD; // 0x1C
	::System::UInt32 OKHIOMLIGGJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_719* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_719*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_719*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_719*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_719* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_719*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_719* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_719*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_719* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_719*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_719_MERGEFROM_1_OFFSET))(this, a1);
	}
};
