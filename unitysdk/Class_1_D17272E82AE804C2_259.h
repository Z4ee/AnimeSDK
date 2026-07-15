#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_259_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CDB82A0)
#define CLASS_1_D17272E82AE804C2_259_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDB7E90)
#define CLASS_1_D17272E82AE804C2_259_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDB8020)
#define CLASS_1_D17272E82AE804C2_259_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDB7F20)
#define CLASS_1_D17272E82AE804C2_259_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDB8190)
#define CLASS_1_D17272E82AE804C2_259_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CDB8360)
#define CLASS_1_D17272E82AE804C2_259_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CDB8330)
#define CLASS_1_D17272E82AE804C2_259_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CDB7F00)
#define CLASS_1_D17272E82AE804C2_259_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CDB7DE0)
#define CLASS_1_D17272E82AE804C2_259_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CDB7F10)
#define CLASS_1_D17272E82AE804C2_259_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDB7E40)
#define CLASS_1_D17272E82AE804C2_259_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CDB81C0)
#define CLASS_1_D17272E82AE804C2_259_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CDB8220)
#define CLASS_1_D17272E82AE804C2_259__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB84C0)
#define CLASS_1_D17272E82AE804C2_259__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDB7E60)
#define CLASS_1_D17272E82AE804C2_259__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB7E50)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_259_TypeDefinitionIndex = 26501;

class Class_1_D17272E82AE804C2_259 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_259*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_259*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_259_TypeDefinitionIndex)->GetStaticField(0x289A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_259* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_259*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_259*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_259*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_259* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_259*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_259* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_259*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_259* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_259*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_259_MERGEFROM_1_OFFSET))(this, a1);
	}
};
