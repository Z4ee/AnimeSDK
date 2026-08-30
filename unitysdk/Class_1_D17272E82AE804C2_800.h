#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_800_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC40280)
#define CLASS_1_D17272E82AE804C2_800_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC3FE90)
#define CLASS_1_D17272E82AE804C2_800_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC3FFF0)
#define CLASS_1_D17272E82AE804C2_800_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC3FF70)
#define CLASS_1_D17272E82AE804C2_800_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC400C0)
#define CLASS_1_D17272E82AE804C2_800_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC40460)
#define CLASS_1_D17272E82AE804C2_800_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC40410)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DC3FF30)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DC3FF50)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DC3FF10)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DC3FDD0)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DC3FF40)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DC3FF60)
#define CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DC3FF20)
#define CLASS_1_D17272E82AE804C2_800_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC3FE30)
#define CLASS_1_D17272E82AE804C2_800_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC400F0)
#define CLASS_1_D17272E82AE804C2_800_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC40150)
#define CLASS_1_D17272E82AE804C2_800__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC40600)
#define CLASS_1_D17272E82AE804C2_800__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC3FE50)
#define CLASS_1_D17272E82AE804C2_800__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3FE40)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_800_TypeDefinitionIndex = 31014;

class Class_1_D17272E82AE804C2_800 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_800*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_800*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_800_TypeDefinitionIndex)->GetStaticField(0x36AE0);
	}
	// static const ::System::Int32 KKEJKDJCMPD = 0x1; // 0x0
	// static const ::System::Int32 JJDOFLLPDJE = 0xF; // 0x0
	// static const ::System::Int32 GKKKEHJAKII = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NPFBAFODCBI; // 0x18
	::System::UInt32 KLINKNMHOCI; // 0x1C
	::System::UInt32 IMAFPDLBAIA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_800* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_800*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_800*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_800*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_800* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_800*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_800* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_800*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_800* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_800*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_800_MERGEFROM_1_OFFSET))(this, a1);
	}
};
