#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_562_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B1820)
#define CLASS_1_D17272E82AE804C2_562_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B1410)
#define CLASS_1_D17272E82AE804C2_562_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B1570)
#define CLASS_1_D17272E82AE804C2_562_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B14F0)
#define CLASS_1_D17272E82AE804C2_562_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B1640)
#define CLASS_1_D17272E82AE804C2_562_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B1A30)
#define CLASS_1_D17272E82AE804C2_562_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B19E0)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E8B14B0)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E8B1490)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E8B1350)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E8B14C0)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E8B14A0)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1E8B14E0)
#define CLASS_1_D17272E82AE804C2_562_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E8B14D0)
#define CLASS_1_D17272E82AE804C2_562_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B13B0)
#define CLASS_1_D17272E82AE804C2_562_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B1670)
#define CLASS_1_D17272E82AE804C2_562_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B16D0)
#define CLASS_1_D17272E82AE804C2_562__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1BE0)
#define CLASS_1_D17272E82AE804C2_562__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B13D0)
#define CLASS_1_D17272E82AE804C2_562__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B13C0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_562_TypeDefinitionIndex = 29345;

class Class_1_D17272E82AE804C2_562 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_562*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_562*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_562_TypeDefinitionIndex)->GetStaticField(0x41E10);
	}
	// static const ::System::Int32 MGBDGGHMGBC = 0x1; // 0x0
	// static const ::System::Int32 EPFPPKBEBJN = 0x2; // 0x0
	// static const ::System::Int32 ODPPKDFGENB = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 BPFDPBKDAMK; // 0x18
	::System::UInt32 IIKBFBEOMLN; // 0x1C
	::System::Int32 OKCGLFPFDEM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_562*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_562*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_562*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_562* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_562*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_562* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_562*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_562*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_562_MERGEFROM_1_OFFSET))(this, a1);
	}
};
