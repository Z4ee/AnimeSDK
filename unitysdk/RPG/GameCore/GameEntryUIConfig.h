#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameEntryMenu; }
namespace RPG::GameCore { class GameEntryStage; }

#define RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1722D5D0)
#define RPG_GAMECORE_GAMEENTRYUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17240A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryUIConfig_TypeDefinitionIndex = 15068;

	class GameEntryUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameEntryMenu*>* GameEntryMenuList; // 0x10
		::Il2CppArray<::RPG::GameCore::GameEntryStage*>* GameEntryStageList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GameEntryUIConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameEntryUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYUICONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
