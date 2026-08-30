#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1077_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC781C0)
#define CLASS_1_D17272E82AE804C2_1077_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC77DA0)
#define CLASS_1_D17272E82AE804C2_1077_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC77F30)
#define CLASS_1_D17272E82AE804C2_1077_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC77E50)
#define CLASS_1_D17272E82AE804C2_1077_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC78000)
#define CLASS_1_D17272E82AE804C2_1077_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC783A0)
#define CLASS_1_D17272E82AE804C2_1077_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC78350)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1EC77E10)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1EC77E30)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EC77DF0)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EC77D10)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1EC77E20)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1EC77E40)
#define CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EC77E00)
#define CLASS_1_D17272E82AE804C2_1077_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC77D40)
#define CLASS_1_D17272E82AE804C2_1077_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC78030)
#define CLASS_1_D17272E82AE804C2_1077_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC78090)
#define CLASS_1_D17272E82AE804C2_1077__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC78550)
#define CLASS_1_D17272E82AE804C2_1077__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC77D60)
#define CLASS_1_D17272E82AE804C2_1077__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC77D50)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1077_TypeDefinitionIndex = 33393;

class Class_1_D17272E82AE804C2_1077 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1077*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1077*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1077_TypeDefinitionIndex)->GetStaticField(0x3E850);
	}
	// static const ::System::Int32 KKHPBDAEOLM = 0xC; // 0x0
	// static const ::System::Int32 OEAKKPCOOJF = 0xA; // 0x0
	// static const ::System::Int32 MLABBDNGIEJ = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HMPAFLDIPPB; // 0x18
	::System::UInt32 PLKGEBACJMA; // 0x1C
	::System::UInt32 AMOPIFLCGOO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1077* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1077*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1077*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1077*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1077* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1077*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1077* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1077*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1077* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1077*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1077_MERGEFROM_1_OFFSET))(this, a1);
	}
};
