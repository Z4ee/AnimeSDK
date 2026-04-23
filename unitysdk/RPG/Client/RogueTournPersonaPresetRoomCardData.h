#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB0F7B80)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0xB0F7FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0F7FC0)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xB0F7C10)
#define RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F7AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaPresetRoomCardData_TypeDefinitionIndex = 62426;

	class RogueTournPersonaPresetRoomCardData : public ::RPG::Client::RogueTournPersonaRoomCardDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaPresetRoomCardData_TypeDefinitionIndex)->GetStaticField(0x1B2D0);
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

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* GetData(::System::UInt32 presetID)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GETDATA_OFFSET))(presetID);
		}

		static ::RPG::Client::RogueTournPersonaPresetRoomCardData* _Create(::System::UInt32 presetID)
		{
			return ((::RPG::Client::RogueTournPersonaPresetRoomCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA__CREATE_OFFSET))(presetID);
		}

		::System::UInt32 get_PresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAPRESETROOMCARDDATA_GET_PRESETID_OFFSET))(this);
		}
	};
}
