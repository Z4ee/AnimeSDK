#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_METHOD_2_C8266C689C99421E_OFFSET UNITYSDK_OFFSET(0x18CE6600)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroup_TypeDefinitionIndex = 16982;

	class RogueAdvRoomCandyCrashGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*>* Templates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C8266C689C99421E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_METHOD_2_C8266C689C99421E_OFFSET))(a1, a2);
		}
	};
}
