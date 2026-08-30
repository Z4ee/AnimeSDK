#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_METHOD_2_C3BE15EE5894F693_OFFSET UNITYSDK_OFFSET(0x1D3BC940)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BCA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroup_TypeDefinitionIndex = 17675;

	class RogueAdvRoomCandyCrashGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*>* Templates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C3BE15EE5894F693(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUP_METHOD_2_C3BE15EE5894F693_OFFSET))(a1, a2);
		}
	};
}
