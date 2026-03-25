#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class String; }

#define CLASS_1_D8C697E5EDE50B55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C43AF0)
#define CLASS_1_D8C697E5EDE50B55_CLONE_OFFSET UNITYSDK_OFFSET(0x17C43650)
#define CLASS_1_D8C697E5EDE50B55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C43740)
#define CLASS_1_D8C697E5EDE50B55_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C43710)
#define CLASS_1_D8C697E5EDE50B55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C43820)
#define CLASS_1_D8C697E5EDE50B55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C43EA0)
#define CLASS_1_D8C697E5EDE50B55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C43DD0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C436D0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17C436F0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C436B0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17C43690)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C436E0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17C43700)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C436C0)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17C43680)
#define CLASS_1_D8C697E5EDE50B55_METHOD_1_CF8C379558248BF8_OFFSET UNITYSDK_OFFSET(0x17C436A0)
#define CLASS_1_D8C697E5EDE50B55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C43520)
#define CLASS_1_D8C697E5EDE50B55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C43920)
#define CLASS_1_D8C697E5EDE50B55_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C43980)
#define CLASS_1_D8C697E5EDE50B55__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C43FC0)
#define CLASS_1_D8C697E5EDE50B55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C43580)
#define CLASS_1_D8C697E5EDE50B55__CTOR_OFFSET UNITYSDK_OFFSET(0x17C43530)

inline static constexpr unsigned int Class_1_D8C697E5EDE50B55_TypeDefinitionIndex = 24684;

class Class_1_D8C697E5EDE50B55 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C697E5EDE50B55_TypeDefinitionIndex)->GetStaticField(0x37980);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_4608E37A1B3D374A_4 Field_1_2; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8C697E5EDE50B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8C697E5EDE50B55* Clone()
	{
		return ((::Class_1_D8C697E5EDE50B55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_4))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_CF8C379558248BF8_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8C697E5EDE50B55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8C697E5EDE50B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8C697E5EDE50B55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
