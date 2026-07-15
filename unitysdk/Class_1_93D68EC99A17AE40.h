#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_240C3282A1ADB5FF_1;
class Class_1_AB73914F11091999_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93D68EC99A17AE40_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD35720)
#define CLASS_1_93D68EC99A17AE40_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD34FA0)
#define CLASS_1_93D68EC99A17AE40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD352F0)
#define CLASS_1_93D68EC99A17AE40_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD350C0)
#define CLASS_1_93D68EC99A17AE40_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD35520)
#define CLASS_1_93D68EC99A17AE40_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD35950)
#define CLASS_1_93D68EC99A17AE40_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD35830)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD350A0)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CD35080)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD35060)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD34EA0)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD350B0)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CD35090)
#define CLASS_1_93D68EC99A17AE40_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD35070)
#define CLASS_1_93D68EC99A17AE40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD34ED0)
#define CLASS_1_93D68EC99A17AE40_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD35580)
#define CLASS_1_93D68EC99A17AE40_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD355E0)
#define CLASS_1_93D68EC99A17AE40__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD35B90)
#define CLASS_1_93D68EC99A17AE40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD34EF0)
#define CLASS_1_93D68EC99A17AE40__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD34EE0)

inline static constexpr unsigned int Class_1_93D68EC99A17AE40_TypeDefinitionIndex = 26424;

class Class_1_93D68EC99A17AE40 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93D68EC99A17AE40*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93D68EC99A17AE40*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93D68EC99A17AE40_TypeDefinitionIndex)->GetStaticField(0x24FA0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Class_1_240C3282A1ADB5FF_1* Field_1_5; // 0x18
	::Class_1_AB73914F11091999_1* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93D68EC99A17AE40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D68EC99A17AE40*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93D68EC99A17AE40*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93D68EC99A17AE40*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93D68EC99A17AE40* Clone()
	{
		return ((::Class_1_93D68EC99A17AE40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_CLONE_OFFSET))(this);
	}

	::Class_1_240C3282A1ADB5FF_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_240C3282A1ADB5FF_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_240C3282A1ADB5FF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_240C3282A1ADB5FF_1*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_AB73914F11091999_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_AB73914F11091999_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_AB73914F11091999_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB73914F11091999_1*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93D68EC99A17AE40* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93D68EC99A17AE40*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93D68EC99A17AE40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93D68EC99A17AE40*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93D68EC99A17AE40_MERGEFROM_1_OFFSET))(this, a1);
	}
};
