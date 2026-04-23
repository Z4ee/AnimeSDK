#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_26.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FBDFBC4C2F16CDD1_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19ABC2A0)
#define CLASS_1_FBDFBC4C2F16CDD1_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19ABC010)
#define CLASS_1_FBDFBC4C2F16CDD1_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19ABC110)
#define CLASS_1_FBDFBC4C2F16CDD1_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19ABC0A0)
#define CLASS_1_FBDFBC4C2F16CDD1_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19ABC170)
#define CLASS_1_FBDFBC4C2F16CDD1_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19ABC480)
#define CLASS_1_FBDFBC4C2F16CDD1_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19ABC440)
#define CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19ABC070)
#define CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19ABC090)
#define CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19ABBF80)
#define CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19ABC080)
#define CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19ABC060)
#define CLASS_1_FBDFBC4C2F16CDD1_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19ABBFB0)
#define CLASS_1_FBDFBC4C2F16CDD1_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19ABC1B0)
#define CLASS_1_FBDFBC4C2F16CDD1_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19ABC210)
#define CLASS_1_FBDFBC4C2F16CDD1_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ABC500)
#define CLASS_1_FBDFBC4C2F16CDD1_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19ABBFD0)
#define CLASS_1_FBDFBC4C2F16CDD1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABBFC0)

inline static constexpr unsigned int Class_1_FBDFBC4C2F16CDD1_2_TypeDefinitionIndex = 31487;

class Class_1_FBDFBC4C2F16CDD1_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FBDFBC4C2F16CDD1_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FBDFBC4C2F16CDD1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBDFBC4C2F16CDD1_2_TypeDefinitionIndex)->GetStaticField(0x56B50);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt64 Field_1_3; // 0x18
	::Enum_3_96F6662CA3713095_26 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FBDFBC4C2F16CDD1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1_2*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FBDFBC4C2F16CDD1_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FBDFBC4C2F16CDD1_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FBDFBC4C2F16CDD1_2* Clone()
	{
		return ((::Class_1_FBDFBC4C2F16CDD1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_26 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_26(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_26))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FBDFBC4C2F16CDD1_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1_2*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FBDFBC4C2F16CDD1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1_2*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FBDFBC4C2F16CDD1_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
