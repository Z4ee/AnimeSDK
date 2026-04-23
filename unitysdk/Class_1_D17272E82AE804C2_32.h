#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193CF7E0)
#define CLASS_1_D17272E82AE804C2_32_CLONE_OFFSET UNITYSDK_OFFSET(0x193CF520)
#define CLASS_1_D17272E82AE804C2_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193CF670)
#define CLASS_1_D17272E82AE804C2_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x193CF5D0)
#define CLASS_1_D17272E82AE804C2_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193CF6D0)
#define CLASS_1_D17272E82AE804C2_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193CF930)
#define CLASS_1_D17272E82AE804C2_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193CF8F0)
#define CLASS_1_D17272E82AE804C2_32_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193CF5B0)
#define CLASS_1_D17272E82AE804C2_32_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193CF590)
#define CLASS_1_D17272E82AE804C2_32_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193CF470)
#define CLASS_1_D17272E82AE804C2_32_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193CF5C0)
#define CLASS_1_D17272E82AE804C2_32_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193CF5A0)
#define CLASS_1_D17272E82AE804C2_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193CF4D0)
#define CLASS_1_D17272E82AE804C2_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193CF700)
#define CLASS_1_D17272E82AE804C2_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x193CF760)
#define CLASS_1_D17272E82AE804C2_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x193CF9B0)
#define CLASS_1_D17272E82AE804C2_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193CF4F0)
#define CLASS_1_D17272E82AE804C2_32__CTOR_OFFSET UNITYSDK_OFFSET(0x193CF4E0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_32_TypeDefinitionIndex = 24336;

class Class_1_D17272E82AE804C2_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_32*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_32_TypeDefinitionIndex)->GetStaticField(0x3E330);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_32*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_32* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
