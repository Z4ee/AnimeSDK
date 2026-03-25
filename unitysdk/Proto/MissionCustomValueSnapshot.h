#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1828B500)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1828B0F0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1828B2D0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1828B200)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1828B360)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_GET_CUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x1828B160)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_GET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1828B180)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1828B700)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1828B690)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1828B090)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_SET_CUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x1828B170)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_SET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1828B190)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1828B410)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1828B470)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1828B0B0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1828B0A0)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshot_TypeDefinitionIndex = 23221;

	class MissionCustomValueSnapshot : public ::System::Object
	{
	public:
		// static const ::System::Int32 CustomValueFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 McvKeyFieldNumber = 0x2; // 0x0
		::System::String* mcvKey_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 customValue_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MissionCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshot* Clone()
		{
			return ((::Proto::MissionCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_CustomValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_GET_CUSTOMVALUE_OFFSET))(this);
		}

		::System::Void set_CustomValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_SET_CUSTOMVALUE_OFFSET))(this, value);
		}

		::System::String* get_McvKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_GET_MCVKEY_OFFSET))(this);
		}

		::System::Void set_McvKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_SET_MCVKEY_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::MissionCustomValueSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MissionCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MissionCustomValueSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
