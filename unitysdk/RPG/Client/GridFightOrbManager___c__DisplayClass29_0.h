#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class OrbSpawnConfig; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x1BC57F10)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__1_OFFSET UNITYSDK_OFFSET(0x1BC58030)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC552A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass29_0_TypeDefinitionIndex = 64523;

	class GridFightOrbManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightOrbEntityData* orbData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddSphere_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _AddSphere_b__1(::RPG::Client::OrbSpawnConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OrbSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__1_OFFSET))(this, a1);
		}
	};
}
