#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class MovieGameFullScreenTranslateEffect; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A35E30)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__INITIALIZEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x9A36500)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameFullScreenTranslateEffect___c__DisplayClass1_0_TypeDefinitionIndex = 62368;

	class MovieGameFullScreenTranslateEffect___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_1_867B6CE75953535A* contexts; // 0x10
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitializeView_b__0(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component, ::Entitas::IComponent* newComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT___C__DISPLAYCLASS1_0__INITIALIZEVIEW_B__0_OFFSET))(this, entity, index, component, newComponent);
		}
	};
}
