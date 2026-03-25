#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_CITYSHOPINFOSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18275C70)
#define PROTO_CITYSHOPINFOSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x18275930)
#define PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18275A80)
#define PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x18275A00)
#define PROTO_CITYSHOPINFOSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18275AF0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_EXP_OFFSET UNITYSDK_OFFSET(0x182759E0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182759A0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x182759C0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_TAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x18275980)
#define PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18275F10)
#define PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18275EC0)
#define PROTO_CITYSHOPINFOSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182758D0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_EXP_OFFSET UNITYSDK_OFFSET(0x182759F0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182759B0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x182759D0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_TAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x18275990)
#define PROTO_CITYSHOPINFOSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18275B40)
#define PROTO_CITYSHOPINFOSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x18275BA0)
#define PROTO_CITYSHOPINFOSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182758F0)
#define PROTO_CITYSHOPINFOSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x182758E0)

namespace Proto
{
	inline static constexpr unsigned int CityShopInfoScNotify_TypeDefinitionIndex = 27154;

	class CityShopInfoScNotify : public ::System::Object
	{
	public:
		// static const ::System::Int32 TakenLevelRewardFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 ShopIdFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 ExpFieldNumber = 0xA; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt64 takenLevelReward_; // 0x18
		::System::UInt32 exp_; // 0x20
		::System::UInt32 shopId_; // 0x24
		::System::UInt32 level_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::CityShopInfoScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::CityShopInfoScNotify* Clone()
		{
			return ((::Proto::CityShopInfoScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_CLONE_OFFSET))(this);
		}

		::System::UInt64 get_TakenLevelReward()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_TAKENLEVELREWARD_OFFSET))(this);
		}

		::System::Void set_TakenLevelReward(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_TAKENLEVELREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_SHOPID_OFFSET))(this, value);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_EXP_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::CityShopInfoScNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::CityShopInfoScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
