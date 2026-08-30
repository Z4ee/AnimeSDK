#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_905_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E739270)
#define CLASS_1_D17272E82AE804C2_905_CLONE_OFFSET UNITYSDK_OFFSET(0x1E738E70)
#define CLASS_1_D17272E82AE804C2_905_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E739030)
#define CLASS_1_D17272E82AE804C2_905_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E738F20)
#define CLASS_1_D17272E82AE804C2_905_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E739100)
#define CLASS_1_D17272E82AE804C2_905_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7393C0)
#define CLASS_1_D17272E82AE804C2_905_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E739380)
#define CLASS_1_D17272E82AE804C2_905_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E738F00)
#define CLASS_1_D17272E82AE804C2_905_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E738EE0)
#define CLASS_1_D17272E82AE804C2_905_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E738DC0)
#define CLASS_1_D17272E82AE804C2_905_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E738F10)
#define CLASS_1_D17272E82AE804C2_905_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E738EF0)
#define CLASS_1_D17272E82AE804C2_905_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E738E20)
#define CLASS_1_D17272E82AE804C2_905_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E739130)
#define CLASS_1_D17272E82AE804C2_905_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E739190)
#define CLASS_1_D17272E82AE804C2_905__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E739540)
#define CLASS_1_D17272E82AE804C2_905__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E738E40)
#define CLASS_1_D17272E82AE804C2_905__CTOR_OFFSET UNITYSDK_OFFSET(0x1E738E30)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_905_TypeDefinitionIndex = 31827;

class Class_1_D17272E82AE804C2_905 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_905*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_905*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_905_TypeDefinitionIndex)->GetStaticField(0xCFC0);
	}
	// static const ::System::Int32 MDCKIFAGLOL = 0x2; // 0x0
	// static const ::System::Int32 EKCFPDDAIMD = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 FPBMHDLILGC; // 0x18
	::System::UInt32 PPGOGDKDEKE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_905*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_905*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_905*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_905* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_905*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_905* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_905*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_905*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_905_MERGEFROM_1_OFFSET))(this, a1);
	}
};
