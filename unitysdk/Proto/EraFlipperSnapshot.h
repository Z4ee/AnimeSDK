#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class EraFlipperRegionDataSnapshot; }
namespace System { class String; }

#define PROTO_ERAFLIPPERSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05EA30)
#define PROTO_ERAFLIPPERSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05E5B0)
#define PROTO_ERAFLIPPERSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05E790)
#define PROTO_ERAFLIPPERSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05E610)
#define PROTO_ERAFLIPPERSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05E8B0)
#define PROTO_ERAFLIPPERSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E05E440)
#define PROTO_ERAFLIPPERSNAPSHOT_GET_REGIONDATALIST_OFFSET UNITYSDK_OFFSET(0x1E05E600)
#define PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05EB70)
#define PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05EAD0)
#define PROTO_ERAFLIPPERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05E4A0)
#define PROTO_ERAFLIPPERSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05E920)
#define PROTO_ERAFLIPPERSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05E980)
#define PROTO_ERAFLIPPERSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05ED30)
#define PROTO_ERAFLIPPERSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05E500)
#define PROTO_ERAFLIPPERSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05E4B0)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperSnapshot_TypeDefinitionIndex = 25501;

	class EraFlipperSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperSnapshot_TypeDefinitionIndex)->GetStaticField(0x59ED0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::EraFlipperRegionDataSnapshot*>** StaticGet__repeated_regionDataList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::EraFlipperRegionDataSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperSnapshot_TypeDefinitionIndex)->GetStaticField(0x59ED8);
		}
		// static const ::System::Int32 RegionDataListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>* regionDataList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EraFlipperSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::EraFlipperSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EraFlipperSnapshot* Clone()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>* get_RegionDataList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::EraFlipperRegionDataSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GET_REGIONDATALIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::EraFlipperSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EraFlipperSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
