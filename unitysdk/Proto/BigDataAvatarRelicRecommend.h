#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_741;
class Class_1_D1E0AD3915BCCF29_100;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1932DB10)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET UNITYSDK_OFFSET(0x1932D180)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1932D2B0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1932D250)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1932D440)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1932D220)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1932D1D0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1932D1F0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET UNITYSDK_OFFSET(0x1932D240)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET UNITYSDK_OFFSET(0x1932D200)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1932CEE0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1932D1E0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1932D210)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1932DFA0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1932DD50)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1932CF40)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1932D230)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1932D8E0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1932D940)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1932E240)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1932D050)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1932CF50)

namespace Proto
{
	inline static constexpr unsigned int BigDataAvatarRelicRecommend_TypeDefinitionIndex = 30455;

	class BigDataAvatarRelicRecommend : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617A0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_100*>** StaticGet__repeated_outerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_100*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617A8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>** StaticGet__repeated_sphereMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617B0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>** StaticGet__repeated_footMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617B8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>** StaticGet__repeated_bodyMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_100*>** StaticGet__repeated_innerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D1E0AD3915BCCF29_100*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>** StaticGet__repeated_ropeMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_741*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x617D0);
		}
		// static const ::System::Int32 BodyMainPropertyListFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 RopeMainPropertyListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 FootMainPropertyListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 OuterSetListFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 SphereMainPropertyListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 InnerSetListFieldNumber = 0x9; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* ropeMainPropertyList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>* innerSetList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* sphereMainPropertyList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* footMainPropertyList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>* outerSetList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* bodyMainPropertyList_; // 0x40
		::System::UInt32 avatarId_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>*(*)())((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::BigDataAvatarRelicRecommend* Clone()
		{
			return ((::Proto::BigDataAvatarRelicRecommend*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* get_BodyMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* get_RopeMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* get_FootMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>* get_OuterSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>* get_SphereMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_741*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>* get_InnerSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_100*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::BigDataAvatarRelicRecommend* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
