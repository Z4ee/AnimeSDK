#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAEB600)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__GETROLEBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xBAEE310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass29_0_TypeDefinitionIndex = 60192;

	class GridFightBattleGameContext___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleByUID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__GETROLEBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
