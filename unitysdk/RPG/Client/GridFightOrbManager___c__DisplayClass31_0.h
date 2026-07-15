#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightInteractableOrb; }
namespace RPG::Client { class OrbSpawnConfig; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE88AC0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS31_0__REGENPENDINGSPHERES_B__0_OFFSET UNITYSDK_OFFSET(0x1AE8A290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass31_0_TypeDefinitionIndex = 61540;

	class GridFightOrbManager___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightInteractableOrb* interable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReGenPendingSpheres_b__0(::RPG::Client::OrbSpawnConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OrbSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS31_0__REGENPENDINGSPHERES_B__0_OFFSET))(this, a1);
		}
	};
}
