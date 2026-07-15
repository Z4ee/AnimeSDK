#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_886;
class Class_1_D17272E82AE804C2_887;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF72FD0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF72980)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF72AB0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF72A50)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF72C10)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1BF72A10)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1BF72A40)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1BF72A30)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET UNITYSDK_OFFSET(0x1BF729E0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET UNITYSDK_OFFSET(0x1BF729D0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF726E0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1BF729F0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1BF72A00)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF73460)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF73210)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF72740)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1BF72A20)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF72D40)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF72DA0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF736F0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF72850)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF72750)

namespace Proto
{
	inline static constexpr unsigned int BigDataAvatarRelicRecommend_TypeDefinitionIndex = 31088;

	class BigDataAvatarRelicRecommend : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>** StaticGet__repeated_sphereMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F20);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_886*>** StaticGet__repeated_outerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_886*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F28);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>** StaticGet__repeated_bodyMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F30);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_886*>** StaticGet__repeated_innerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_886*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F38);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::BigDataAvatarRelicRecommend*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F40);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>** StaticGet__repeated_footMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F48);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>** StaticGet__repeated_ropeMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_887*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x21F50);
		}
		// static const ::System::Int32 OuterSetListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 InnerSetListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 RopeMainPropertyListFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 SphereMainPropertyListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 FootMainPropertyListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 BodyMainPropertyListFieldNumber = 0x6; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>* outerSetList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* ropeMainPropertyList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* bodyMainPropertyList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* footMainPropertyList_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>* innerSetList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* sphereMainPropertyList_; // 0x40
		::System::UInt32 avatarId_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET))(this, a1);
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

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>* get_OuterSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>* get_InnerSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* get_RopeMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* get_SphereMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* get_FootMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* get_BodyMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
