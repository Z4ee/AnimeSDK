#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueAdventureRoomHUDParamItem; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }

#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_HINTPARAM_OFFSET UNITYSDK_OFFSET(0xAA1D5E0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_ROOMINFO_OFFSET UNITYSDK_OFFSET(0xAA1D620)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0xAA1D600)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_HINTPARAM_OFFSET UNITYSDK_OFFSET(0xAA1D5F0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_ROOMINFO_OFFSET UNITYSDK_OFFSET(0xAA1D630)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0xAA1D610)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA1D650)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1D640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomHUDParam_TypeDefinitionIndex = 47152;

	class RogueAdventureRoomHUDParam : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAdventureRoomHUDParamItem* _TargetParam_k__BackingField; // 0x10
		::RPG::GameCore::RogueClientAdventureRoomInfo* _RoomInfo_k__BackingField; // 0x18
		::RPG::GameCore::RogueAdventureRoomHUDParamItem* _HintParam_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::RogueAdventureRoomHUDParamItem* hintParam, ::RPG::GameCore::RogueAdventureRoomHUDParamItem* targetParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_OFFSET))(this, hintParam, targetParam);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueAdventureRoomHUDParamItem* hintParam, ::RPG::GameCore::RogueAdventureRoomHUDParamItem* targetParam, ::RPG::GameCore::RogueClientAdventureRoomInfo* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*, ::RPG::GameCore::RogueClientAdventureRoomInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM__CTOR_1_OFFSET))(this, hintParam, targetParam, roomInfo);
		}

		::RPG::GameCore::RogueAdventureRoomHUDParamItem* get_HintParam()
		{
			return ((::RPG::GameCore::RogueAdventureRoomHUDParamItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_HINTPARAM_OFFSET))(this);
		}

		::System::Void set_HintParam(::RPG::GameCore::RogueAdventureRoomHUDParamItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_HINTPARAM_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueAdventureRoomHUDParamItem* get_TargetParam()
		{
			return ((::RPG::GameCore::RogueAdventureRoomHUDParamItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_TARGETPARAM_OFFSET))(this);
		}

		::System::Void set_TargetParam(::RPG::GameCore::RogueAdventureRoomHUDParamItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomHUDParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_TARGETPARAM_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueClientAdventureRoomInfo* get_RoomInfo()
		{
			return ((::RPG::GameCore::RogueClientAdventureRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_GET_ROOMINFO_OFFSET))(this);
		}

		::System::Void set_RoomInfo(::RPG::GameCore::RogueClientAdventureRoomInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueClientAdventureRoomInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAM_SET_ROOMINFO_OFFSET))(this, value);
		}
	};
}
