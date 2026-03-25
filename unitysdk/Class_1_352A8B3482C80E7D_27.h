#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C20F50)
#define CLASS_1_352A8B3482C80E7D_27_CLONE_OFFSET UNITYSDK_OFFSET(0x17C20C80)
#define CLASS_1_352A8B3482C80E7D_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C20DD0)
#define CLASS_1_352A8B3482C80E7D_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C20D30)
#define CLASS_1_352A8B3482C80E7D_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C20E30)
#define CLASS_1_352A8B3482C80E7D_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C210E0)
#define CLASS_1_352A8B3482C80E7D_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C210A0)
#define CLASS_1_352A8B3482C80E7D_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C20D10)
#define CLASS_1_352A8B3482C80E7D_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C20D20)
#define CLASS_1_352A8B3482C80E7D_27_METHOD_1_846EDF57F2A478CA_OFFSET UNITYSDK_OFFSET(0x17C20CF0)
#define CLASS_1_352A8B3482C80E7D_27_METHOD_1_CBA8E20523A95EF1_OFFSET UNITYSDK_OFFSET(0x17C20D00)
#define CLASS_1_352A8B3482C80E7D_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C20C30)
#define CLASS_1_352A8B3482C80E7D_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C20E60)
#define CLASS_1_352A8B3482C80E7D_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C20EC0)
#define CLASS_1_352A8B3482C80E7D_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C20C50)
#define CLASS_1_352A8B3482C80E7D_27__CTOR_OFFSET UNITYSDK_OFFSET(0x17C20C40)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_27_TypeDefinitionIndex = 24987;

class Class_1_352A8B3482C80E7D_27 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_27*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_27* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_CLONE_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46 Method_1_846EDF57F2A478CA()
	{
		return ((::Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_METHOD_1_846EDF57F2A478CA_OFFSET))(this);
	}

	::System::Void Method_1_CBA8E20523A95EF1(::Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_27_Class_1_534EF681CC2FBEA4_Enum_3_07AC48868F739A46))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_METHOD_1_CBA8E20523A95EF1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_27*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_27*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
