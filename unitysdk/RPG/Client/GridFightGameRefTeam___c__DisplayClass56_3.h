#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3__CTOR_OFFSET UNITYSDK_OFFSET(0x983A6D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3___SYNCTEAM_B__5_OFFSET UNITYSDK_OFFSET(0x983B5F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3___SYNCTEAM_B__6_OFFSET UNITYSDK_OFFSET(0x983B640)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass56_3_TypeDefinitionIndex = 52621;

	class GridFightGameRefTeam___c__DisplayClass56_3 : public ::System::Object
	{
	public:
		::Class_1_7AB88D713F5121B3_45* rule; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__5(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3___SYNCTEAM_B__5_OFFSET))(this, x);
		}

		::System::Boolean __SyncTeam_b__6(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_3___SYNCTEAM_B__6_OFFSET))(this, x);
		}
	};
}
