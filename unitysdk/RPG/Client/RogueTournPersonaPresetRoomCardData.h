#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xDF90180)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0xDF90530)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF90570)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xDF90210)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF90000)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaPresetRoomCardData_TypeDefinitionIndex = 67730;

	class RogueTournPersonaPresetRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaPresetRoomCardData_TypeDefinitionIndex)->GetStaticField(0x17980);
		}
		::System::UInt32 _PresetID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* _Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_PresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET))(this);
		}
	};
}
