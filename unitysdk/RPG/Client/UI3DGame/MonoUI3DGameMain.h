#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_190;
class Class_1_D33B7D6901AE39E9;
class Class_2_1792A4214A514F27;
namespace RPG::Client::UI3DGame { class MonopolyGameController; }
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET UNITYSDK_OFFSET(0x16FED0A0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16FED520)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x16FED4C0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FED880)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__DESTORYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x16FED570)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x16FED370)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__STARTUPDATESYSTEM_OFFSET UNITYSDK_OFFSET(0x16FED3E0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGameMain_TypeDefinitionIndex = 72054;

	class MonoUI3DGameMain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_D33B7D6901AE39E9* _Contexts; // 0x18
		::Class_2_1792A4214A514F27* _UpdateSystems; // 0x20
		::Class_1_43BD383C98B4C0C5_190* _GameController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__CTOR_OFFSET))(this);
		}

		::RPG::Client::UI3DGame::MonopolyGameController* InitMonopolyGame(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::UI3DGame::MonopolyGameController*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitGameContext(::Class_1_43BD383C98B4C0C5_190* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_190*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET))(this, a1);
		}

		::System::Void _StartUpdateSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__STARTUPDATESYSTEM_OFFSET))(this);
		}

		::System::Void _DestoryGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__DESTORYGAMECONTEXT_OFFSET))(this);
		}
	};
}
