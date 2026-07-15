#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_350_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBC98A0)
#define CLASS_1_D17272E82AE804C2_350_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBC9480)
#define CLASS_1_D17272E82AE804C2_350_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBC95E0)
#define CLASS_1_D17272E82AE804C2_350_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBC9560)
#define CLASS_1_D17272E82AE804C2_350_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBC96B0)
#define CLASS_1_D17272E82AE804C2_350_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBC9AA0)
#define CLASS_1_D17272E82AE804C2_350_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBC9A50)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CBC9540)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBC9520)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBC93C0)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CBC9550)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBC9530)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CBC9510)
#define CLASS_1_D17272E82AE804C2_350_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CBC9500)
#define CLASS_1_D17272E82AE804C2_350_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBC9420)
#define CLASS_1_D17272E82AE804C2_350_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBC96E0)
#define CLASS_1_D17272E82AE804C2_350_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBC9740)
#define CLASS_1_D17272E82AE804C2_350__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBC9C40)
#define CLASS_1_D17272E82AE804C2_350__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBC9440)
#define CLASS_1_D17272E82AE804C2_350__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC9430)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_350_TypeDefinitionIndex = 27362;

class Class_1_D17272E82AE804C2_350 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_350*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_350*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_350_TypeDefinitionIndex)->GetStaticField(0x54B90);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_350* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_350*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_350*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_350*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_350* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_350*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_350* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_350*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_350* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_350*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_350_MERGEFROM_1_OFFSET))(this, a1);
	}
};
