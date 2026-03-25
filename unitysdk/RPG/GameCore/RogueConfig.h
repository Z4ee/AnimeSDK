#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175EF150)
#define RPG_GAMECORE_ROGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EF300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConfig_TypeDefinitionIndex = 16209;

	class RogueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RogueFloorID; // 0x10
		::System::UInt32 RogueStartGroupID; // 0x14
		::System::UInt32 RogueStartPlayerAnchorID; // 0x18
		::Il2CppArray<::System::UInt32>* RogueRoomGenerate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
