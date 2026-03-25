#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_93;
class Class_1_FA4F4A67B1C04320_706;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_BIGDATAAVATARRELICRECOMMEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182746B0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET UNITYSDK_OFFSET(0x18273D20)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18273E50)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x18273DF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18273FF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18273D80)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x18273DB0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x18273DA0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET UNITYSDK_OFFSET(0x18273D70)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET UNITYSDK_OFFSET(0x18273DD0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x18273DC0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x18273DE0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18274B50)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18274900)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18273AE0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18273D90)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18274480)
#define PROTO_BIGDATAAVATARRELICRECOMMEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x182744E0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CCTOR_OFFSET UNITYSDK_OFFSET(0x18274DF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18273BF0)
#define PROTO_BIGDATAAVATARRELICRECOMMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18273AF0)

namespace Proto
{
	inline static constexpr unsigned int BigDataAvatarRelicRecommend_TypeDefinitionIndex = 26200;

	class BigDataAvatarRelicRecommend : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>** StaticGet__repeated_bodyMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x194F0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_93*>** StaticGet__repeated_outerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_93*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x194F8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>** StaticGet__repeated_sphereMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x19500);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_93*>** StaticGet__repeated_innerSetList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_93*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x19508);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>** StaticGet__repeated_ropeMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x19510);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>** StaticGet__repeated_footMainPropertyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_706*>**)Il2CppClass::FromTypeDefinitionIndex(BigDataAvatarRelicRecommend_TypeDefinitionIndex)->GetStaticField(0x19518);
		}
		// static const ::System::Int32 InnerSetListFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 FootMainPropertyListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 BodyMainPropertyListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 RopeMainPropertyListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 OuterSetListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 SphereMainPropertyListFieldNumber = 0x3; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* footMainPropertyList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* bodyMainPropertyList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* ropeMainPropertyList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>* outerSetList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>* innerSetList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* sphereMainPropertyList_; // 0x40
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

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::BigDataAvatarRelicRecommend* Clone()
		{
			return ((::Proto::BigDataAvatarRelicRecommend*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>* get_InnerSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_INNERSETLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_SET_AVATARID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* get_FootMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_FOOTMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* get_BodyMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_BODYMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* get_RopeMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_ROPEMAINPROPERTYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>* get_OuterSetList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_93*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_OUTERSETLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>* get_SphereMainPropertyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_706*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BIGDATAAVATARRELICRECOMMEND_GET_SPHEREMAINPROPERTYLIST_OFFSET))(this);
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
