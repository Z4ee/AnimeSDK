#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D60D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__GETROLESBYID_B__0_OFFSET UNITYSDK_OFFSET(0x97D8980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass29_0_TypeDefinitionIndex = 52305;

	class GridFightBattleGameContext___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByID_b__0(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS29_0__GETROLESBYID_B__0_OFFSET))(this, role);
		}
	};
}
