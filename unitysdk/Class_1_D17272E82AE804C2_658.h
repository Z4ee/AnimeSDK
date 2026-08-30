#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_658_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D3B70)
#define CLASS_1_D17272E82AE804C2_658_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D3750)
#define CLASS_1_D17272E82AE804C2_658_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D38E0)
#define CLASS_1_D17272E82AE804C2_658_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D3800)
#define CLASS_1_D17272E82AE804C2_658_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D39B0)
#define CLASS_1_D17272E82AE804C2_658_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D3D50)
#define CLASS_1_D17272E82AE804C2_658_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D3D00)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E7D37C0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E7D37E0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E7D37A0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E7D36C0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E7D37D0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E7D37F0)
#define CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E7D37B0)
#define CLASS_1_D17272E82AE804C2_658_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D36F0)
#define CLASS_1_D17272E82AE804C2_658_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D39E0)
#define CLASS_1_D17272E82AE804C2_658_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D3A40)
#define CLASS_1_D17272E82AE804C2_658__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D3EF0)
#define CLASS_1_D17272E82AE804C2_658__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D3710)
#define CLASS_1_D17272E82AE804C2_658__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D3700)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_658_TypeDefinitionIndex = 30093;

class Class_1_D17272E82AE804C2_658 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_658*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_658*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_658_TypeDefinitionIndex)->GetStaticField(0x345A0);
	}
	// static const ::System::Int32 GKKKEHJAKII = 0x2; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x1; // 0x0
	// static const ::System::Int32 AKDGEBMBHAM = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 KLINKNMHOCI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x1C
	::System::UInt32 IHODDKNKKOM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_658* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_658*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_658*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_658*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_658* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_658*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_658* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_658*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_658* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_658*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_658_MERGEFROM_1_OFFSET))(this, a1);
	}
};
