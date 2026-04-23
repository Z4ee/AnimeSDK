#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CCBC20E4F6BA3CFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193630B0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x19362CE0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19362E00)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x19362D20)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19362EB0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19362BD0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_SWITCHINFOLIST_OFFSET UNITYSDK_OFFSET(0x19362D10)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193631F0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19363150)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19362C00)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19362FA0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x19363000)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x193632D0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19362C50)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19362C10)

namespace Proto
{
	inline static constexpr unsigned int UpdateFeatureSwitchScNotify_TypeDefinitionIndex = 30076;

	class UpdateFeatureSwitchScNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_CCBC20E4F6BA3CFE*>** StaticGet__repeated_switchInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_CCBC20E4F6BA3CFE*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateFeatureSwitchScNotify_TypeDefinitionIndex)->GetStaticField(0x662A0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateFeatureSwitchScNotify_TypeDefinitionIndex)->GetStaticField(0x662A8);
		}
		// static const ::System::Int32 SwitchInfoListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CCBC20E4F6BA3CFE*>* switchInfoList_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UpdateFeatureSwitchScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UpdateFeatureSwitchScNotify* Clone()
		{
			return ((::Proto::UpdateFeatureSwitchScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CCBC20E4F6BA3CFE*>* get_SwitchInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CCBC20E4F6BA3CFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_SWITCHINFOLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::UpdateFeatureSwitchScNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UpdateFeatureSwitchScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
