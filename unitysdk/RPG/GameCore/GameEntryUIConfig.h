#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameEntryMenu; }
namespace RPG::GameCore { class GameEntryStage; }

#define RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D13CCE0)
#define RPG_GAMECORE_GAMEENTRYUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13CE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryUIConfig_TypeDefinitionIndex = 16287;

	class GameEntryUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameEntryMenu*>* GameEntryMenuList; // 0x10
		::Il2CppArray<::RPG::GameCore::GameEntryStage*>* GameEntryStageList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameEntryUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameEntryUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
