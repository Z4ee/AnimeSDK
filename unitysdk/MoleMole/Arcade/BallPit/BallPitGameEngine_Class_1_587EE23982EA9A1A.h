#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::BallPit { class BallPitGameEngine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_CLASS_1_587EE23982EA9A1A_METHOD_1_3B957A33DA293080_OFFSET UNITYSDK_OFFSET(0x1D9B1FC0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_CLASS_1_587EE23982EA9A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B1FB0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameEngine_Class_1_587EE23982EA9A1A_TypeDefinitionIndex = 89493;

	class BallPitGameEngine_Class_1_587EE23982EA9A1A : public ::System::Object
	{
	public:
		::MoleMole::Arcade::BallPit::BallPitGameEngine* Field_1_2; // 0x10
		::System::Int32 Field_1_0; // 0x18
		::System::Int32 Field_1_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_CLASS_1_587EE23982EA9A1A__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3B957A33DA293080(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_CLASS_1_587EE23982EA9A1A_METHOD_1_3B957A33DA293080_OFFSET))(this, a1, a2);
		}
	};
}
