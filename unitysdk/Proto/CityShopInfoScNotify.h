#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_CITYSHOPINFOSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF74D90)
#define PROTO_CITYSHOPINFOSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF74950)
#define PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF74A70)
#define PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF74A20)
#define PROTO_CITYSHOPINFOSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF74B50)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1BF749C0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF74A00)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF748C0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1BF749A0)
#define PROTO_CITYSHOPINFOSCNOTIFY_GET_TAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1BF749E0)
#define PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF75040)
#define PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF74FF0)
#define PROTO_CITYSHOPINFOSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF748F0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1BF749D0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF74A10)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1BF749B0)
#define PROTO_CITYSHOPINFOSCNOTIFY_SET_TAKENLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1BF749F0)
#define PROTO_CITYSHOPINFOSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF74BA0)
#define PROTO_CITYSHOPINFOSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF74C00)
#define PROTO_CITYSHOPINFOSCNOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF750E0)
#define PROTO_CITYSHOPINFOSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF74910)
#define PROTO_CITYSHOPINFOSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF74900)

namespace Proto
{
	inline static constexpr unsigned int CityShopInfoScNotify_TypeDefinitionIndex = 32780;

	class CityShopInfoScNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::CityShopInfoScNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::CityShopInfoScNotify*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopInfoScNotify_TypeDefinitionIndex)->GetStaticField(0x308A0);
		}
		// static const ::System::Int32 ShopIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 ExpFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 TakenLevelRewardFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 exp_; // 0x18
		::System::UInt32 level_; // 0x1C
		::System::UInt32 shopId_; // 0x20
		::System::UInt64 takenLevelReward_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::CityShopInfoScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::CityShopInfoScNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::CityShopInfoScNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::CityShopInfoScNotify* Clone()
		{
			return ((::Proto::CityShopInfoScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_EXP_OFFSET))(this, a1);
		}

		::System::UInt64 get_TakenLevelReward()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_TAKENLEVELREWARD_OFFSET))(this);
		}

		::System::Void set_TakenLevelReward(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_TAKENLEVELREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::CityShopInfoScNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::CityShopInfoScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::CityShopInfoScNotify*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
