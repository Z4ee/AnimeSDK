#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB0FF750)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0FF6B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB0FF440)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB0FF7B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0xB0FF920)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RANKSTRING_OFFSET UNITYSDK_OFFSET(0xB0FF900)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB0FF8E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB0FF7F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB0FF870)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_ISCORE_OFFSET UNITYSDK_OFFSET(0xB0FF930)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RANKSTRING_OFFSET UNITYSDK_OFFSET(0xB0FF910)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB0FF8F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0FF940)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0FF630)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FF620)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0FF9B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB0FF9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftRarityData_TypeDefinitionIndex = 62449;

	class RogueTournPersonaStyleGiftRarityData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournPersonaStyleGiftRarityType, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournPersonaStyleGiftRarityType, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleGiftRarityData_TypeDefinitionIndex)->GetStaticField(0x1BD60);
		}
		::System::String* _RankString_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType _Rarity_k__BackingField; // 0x18
		::System::Boolean _IsCore_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftRarityData* GetData(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType rarity)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETDATA_OFFSET))(rarity);
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftRarityData* _CreateData(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType rarity)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CREATEDATA_OFFSET))(rarity);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaStyleGiftRarityData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaStyleGiftRarityData* lhs, ::RPG::Client::RogueTournPersonaStyleGiftRarityData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaStyleGiftRarityData*, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaStyleGiftRarityData* lhs, ::RPG::Client::RogueTournPersonaStyleGiftRarityData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaStyleGiftRarityData*, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType get_Rarity()
		{
			return ((::RPG::GameCore::RogueTournPersonaStyleGiftRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RARITY_OFFSET))(this, value);
		}

		::System::String* get_RankString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RANKSTRING_OFFSET))(this);
		}

		::System::Void set_RankString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RANKSTRING_OFFSET))(this, value);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_ISCORE_OFFSET))(this);
		}

		::System::Void set_IsCore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_ISCORE_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
