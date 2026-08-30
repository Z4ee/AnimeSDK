#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7B00F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7B0050)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C7AFE90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7B0150)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0x1C7B02C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RANKSTRING_OFFSET UNITYSDK_OFFSET(0x1C7B02A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C7B0280)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C7B0190)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C7B0210)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_ISCORE_OFFSET UNITYSDK_OFFSET(0x1C7B02D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RANKSTRING_OFFSET UNITYSDK_OFFSET(0x1C7B02B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C7B0290)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7B02E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1C7AFFD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7AFFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftRarityData_TypeDefinitionIndex = 67754;

	class RogueTournPersonaStyleGiftRarityData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournPersonaStyleGiftRarityType, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournPersonaStyleGiftRarityType, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleGiftRarityData_TypeDefinitionIndex)->GetStaticField(0x18030);
		}
		::System::String* _RankString_k__BackingField; // 0x10
		::System::Boolean _IsCore_k__BackingField; // 0x18
		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType _Rarity_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftRarityData* GetData(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaStyleGiftRarityData* _CreateData(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaStyleGiftRarityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaStyleGiftRarityData* a1, ::RPG::Client::RogueTournPersonaStyleGiftRarityData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaStyleGiftRarityData*, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaStyleGiftRarityData* a1, ::RPG::Client::RogueTournPersonaStyleGiftRarityData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaStyleGiftRarityData*, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType get_Rarity()
		{
			return ((::RPG::GameCore::RogueTournPersonaStyleGiftRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::GameCore::RogueTournPersonaStyleGiftRarityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournPersonaStyleGiftRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RARITY_OFFSET))(this, a1);
		}

		::System::String* get_RankString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_RANKSTRING_OFFSET))(this);
		}

		::System::Void set_RankString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_RANKSTRING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_GET_ISCORE_OFFSET))(this);
		}

		::System::Void set_IsCore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTRARITYDATA_SET_ISCORE_OFFSET))(this, a1);
		}
	};
}
