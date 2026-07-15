#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class ElationConfig; }

#define RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB33690)
#define RPG_GAMECORE_ELATIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB337A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationConfigList_TypeDefinitionIndex = 15894;

	class ElationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElationConfig*>* ConfigList; // 0x10
		::RPG::GameCore::ElationCharacterUIConfig* UIConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIGLIST_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
