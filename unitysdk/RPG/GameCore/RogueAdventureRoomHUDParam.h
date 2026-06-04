#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueAdventureRoomHUDParamItem; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }

#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_HINTPARAM_OFFSET UNITYSDK_OFFSET(0xCE8A670)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_ROOMINFO_OFFSET UNITYSDK_OFFSET(0xCE8A6B0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0xCE8A690)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_HINTPARAM_OFFSET UNITYSDK_OFFSET(0xCE8A680)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_ROOMINFO_OFFSET UNITYSDK_OFFSET(0xCE8A6C0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0xCE8A6A0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCE8A6E0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCE8A6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomHUDParam_TypeDefinitionIndex = 54609;

	class RogueAdventureRoomHUDParam : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueClientAdventureRoomInfo* _RoomInfo_k__BackingField; // 0x10
		::RPG::GameCore::RogueAdventureRoomHUDParamItem* _TargetParam_k__BackingField; // 0x18
		::RPG::GameCore::RogueAdventureRoomHUDParamItem* _HintParam_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::RogueAdventureRoomHUDParamItem* a1, ::RPG::GameCore::RogueAdventureRoomHUDParamItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueAdventureRoomHUDParamItem* a1, ::RPG::GameCore::RogueAdventureRoomHUDParamItem* a2, ::RPG::GameCore::RogueClientAdventureRoomInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueClientAdventureRoomInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::RogueAdventureRoomHUDParamItem* get_HintParam()
		{
			return ((::RPG::GameCore::RogueAdventureRoomHUDParamItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_HINTPARAM_OFFSET))(this);
		}

		::System::Void set_HintParam(::RPG::GameCore::RogueAdventureRoomHUDParamItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_HINTPARAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueAdventureRoomHUDParamItem* get_TargetParam()
		{
			return ((::RPG::GameCore::RogueAdventureRoomHUDParamItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_TARGETPARAM_OFFSET))(this);
		}

		::System::Void set_TargetParam(::RPG::GameCore::RogueAdventureRoomHUDParamItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_TARGETPARAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueClientAdventureRoomInfo* get_RoomInfo()
		{
			return ((::RPG::GameCore::RogueClientAdventureRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_ROOMINFO_OFFSET))(this);
		}

		::System::Void set_RoomInfo(::RPG::GameCore::RogueClientAdventureRoomInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueClientAdventureRoomInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_ROOMINFO_OFFSET))(this, a1);
		}
	};
}
