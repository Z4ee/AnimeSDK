#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_314_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C85D640)
#define CLASS_1_D17272E82AE804C2_314_CLONE_OFFSET UNITYSDK_OFFSET(0x1C85D230)
#define CLASS_1_D17272E82AE804C2_314_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C85D3C0)
#define CLASS_1_D17272E82AE804C2_314_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C85D2C0)
#define CLASS_1_D17272E82AE804C2_314_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C85D530)
#define CLASS_1_D17272E82AE804C2_314_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C85D700)
#define CLASS_1_D17272E82AE804C2_314_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C85D6D0)
#define CLASS_1_D17272E82AE804C2_314_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C85D2A0)
#define CLASS_1_D17272E82AE804C2_314_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C85D180)
#define CLASS_1_D17272E82AE804C2_314_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C85D2B0)
#define CLASS_1_D17272E82AE804C2_314_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C85D1E0)
#define CLASS_1_D17272E82AE804C2_314_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C85D560)
#define CLASS_1_D17272E82AE804C2_314_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C85D5C0)
#define CLASS_1_D17272E82AE804C2_314__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C85D860)
#define CLASS_1_D17272E82AE804C2_314__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C85D200)
#define CLASS_1_D17272E82AE804C2_314__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85D1F0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_314_TypeDefinitionIndex = 26988;

class Class_1_D17272E82AE804C2_314 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_314*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_314*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_314_TypeDefinitionIndex)->GetStaticField(0x3A290);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_314* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_314*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_314*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_314*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_314* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_314*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_314* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_314*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_314* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_314*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_314_MERGEFROM_1_OFFSET))(this, a1);
	}
};
