#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_50210DAEB46E0CD5;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABFD470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3___SYNCTEAM_B__5_OFFSET UNITYSDK_OFFSET(0x1ABFF020)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3___SYNCTEAM_B__6_OFFSET UNITYSDK_OFFSET(0x1ABFF060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_3_TypeDefinitionIndex = 61887;

	class GridFightGameRefTeam___c__DisplayClass59_3 : public ::System::Object
	{
	public:
		::Class_1_50210DAEB46E0CD5* rule; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__5(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3___SYNCTEAM_B__5_OFFSET))(this, a1);
		}

		::System::Boolean __SyncTeam_b__6(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_3___SYNCTEAM_B__6_OFFSET))(this, a1);
		}
	};
}
