#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_762_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6CE880)
#define CLASS_1_D17272E82AE804C2_762_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6CE460)
#define CLASS_1_D17272E82AE804C2_762_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6CE5F0)
#define CLASS_1_D17272E82AE804C2_762_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6CE510)
#define CLASS_1_D17272E82AE804C2_762_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6CE6C0)
#define CLASS_1_D17272E82AE804C2_762_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6CEA60)
#define CLASS_1_D17272E82AE804C2_762_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6CEA10)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C6CE4D0)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C6CE4F0)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C6CE4B0)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C6CE3D0)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C6CE4E0)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C6CE500)
#define CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C6CE4C0)
#define CLASS_1_D17272E82AE804C2_762_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6CE400)
#define CLASS_1_D17272E82AE804C2_762_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6CE6F0)
#define CLASS_1_D17272E82AE804C2_762_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6CE750)
#define CLASS_1_D17272E82AE804C2_762__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6CEC10)
#define CLASS_1_D17272E82AE804C2_762__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6CE420)
#define CLASS_1_D17272E82AE804C2_762__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CE410)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_762_TypeDefinitionIndex = 30170;

class Class_1_D17272E82AE804C2_762 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_762*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_762*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_762_TypeDefinitionIndex)->GetStaticField(0x62720);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_762* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_762*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_762*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_762*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_762* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_762*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_762* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_762*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_762* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_762*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_762_MERGEFROM_1_OFFSET))(this, a1);
	}
};
