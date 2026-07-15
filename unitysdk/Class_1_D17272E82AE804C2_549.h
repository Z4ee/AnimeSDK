#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_549_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C644EF0)
#define CLASS_1_D17272E82AE804C2_549_CLONE_OFFSET UNITYSDK_OFFSET(0x1C644AE0)
#define CLASS_1_D17272E82AE804C2_549_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C644C40)
#define CLASS_1_D17272E82AE804C2_549_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C644BC0)
#define CLASS_1_D17272E82AE804C2_549_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C644D10)
#define CLASS_1_D17272E82AE804C2_549_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6450F0)
#define CLASS_1_D17272E82AE804C2_549_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6450A0)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C644BA0)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C644B80)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C644A20)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C644BB0)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C644B90)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1C644B70)
#define CLASS_1_D17272E82AE804C2_549_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C644B60)
#define CLASS_1_D17272E82AE804C2_549_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C644A80)
#define CLASS_1_D17272E82AE804C2_549_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C644D40)
#define CLASS_1_D17272E82AE804C2_549_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C644DA0)
#define CLASS_1_D17272E82AE804C2_549__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C645290)
#define CLASS_1_D17272E82AE804C2_549__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C644AA0)
#define CLASS_1_D17272E82AE804C2_549__CTOR_OFFSET UNITYSDK_OFFSET(0x1C644A90)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_549_TypeDefinitionIndex = 28636;

class Class_1_D17272E82AE804C2_549 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_549*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_549*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_549_TypeDefinitionIndex)->GetStaticField(0x5A8A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_549* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_549*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_549*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_549*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_549* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_549*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_549* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_549*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_549* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_549*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_549_MERGEFROM_1_OFFSET))(this, a1);
	}
};
