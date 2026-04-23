#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class ElationConfig; }

#define RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18898680)
#define RPG_GAMECORE_ELATIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18898780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationConfigList_TypeDefinitionIndex = 15663;

	class ElationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElationConfig*>* ConfigList; // 0x10
		::RPG::GameCore::ElationCharacterUIConfig* UIConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ElationConfigList*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET))(array, val);
		}
	};
}
