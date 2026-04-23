#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_717_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D1DFC0)
#define CLASS_1_D17272E82AE804C2_717_CLONE_OFFSET UNITYSDK_OFFSET(0x19D1DD50)
#define CLASS_1_D17272E82AE804C2_717_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D1DE80)
#define CLASS_1_D17272E82AE804C2_717_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D1DDE0)
#define CLASS_1_D17272E82AE804C2_717_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D1DED0)
#define CLASS_1_D17272E82AE804C2_717_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D1E080)
#define CLASS_1_D17272E82AE804C2_717_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D1E050)
#define CLASS_1_D17272E82AE804C2_717_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19D1DDC0)
#define CLASS_1_D17272E82AE804C2_717_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19D1DCA0)
#define CLASS_1_D17272E82AE804C2_717_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19D1DDD0)
#define CLASS_1_D17272E82AE804C2_717_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D1DD00)
#define CLASS_1_D17272E82AE804C2_717_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D1DF00)
#define CLASS_1_D17272E82AE804C2_717_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D1DF60)
#define CLASS_1_D17272E82AE804C2_717__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1E0F0)
#define CLASS_1_D17272E82AE804C2_717__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D1DD20)
#define CLASS_1_D17272E82AE804C2_717__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1DD10)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_717_TypeDefinitionIndex = 30172;

class Class_1_D17272E82AE804C2_717 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_717*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_717*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_717_TypeDefinitionIndex)->GetStaticField(0x69740);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_717* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_717*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_717*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_717*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_717* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_717*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_717* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_717*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_717* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_717*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_717_MERGEFROM_1_OFFSET))(this, a1);
	}
};
