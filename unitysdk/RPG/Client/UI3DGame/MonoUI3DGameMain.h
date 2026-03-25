#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_169;
class Class_1_867B6CE75953535A;
class Class_2_1792A4214A514F27;
namespace RPG::Client::UI3DGame { class MonopolyGameController; }
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET UNITYSDK_OFFSET(0xA654AA0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA654F20)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA654EC0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA655210)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__DESTORYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA654F70)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA654DD0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__STARTUPDATESYSTEM_OFFSET UNITYSDK_OFFSET(0xA654E40)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGameMain_TypeDefinitionIndex = 61809;

	class MonoUI3DGameMain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_867B6CE75953535A* _Contexts; // 0x18
		::Class_2_1792A4214A514F27* _UpdateSystems; // 0x20
		::Class_1_43BD383C98B4C0C5_169* _GameController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__CTOR_OFFSET))(this);
		}

		::RPG::Client::UI3DGame::MonopolyGameController* InitMonopolyGame(::System::String* mapPath, ::System::UInt32 startCellID, ::System::UInt32 startMapID)
		{
			return ((::RPG::Client::UI3DGame::MonopolyGameController*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET))(this, mapPath, startCellID, startMapID);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitGameContext(::Class_1_43BD383C98B4C0C5_169* gameController)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_169*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET))(this, gameController);
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
