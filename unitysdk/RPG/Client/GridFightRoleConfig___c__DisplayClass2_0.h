#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackRankConfig; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98910D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS2_0__GETBACKRANKCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x9892D20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c__DisplayClass2_0_TypeDefinitionIndex = 52870;

	class GridFightRoleConfig___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackRankConfig_b__0(::RPG::Client::GridFightBackRankConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS2_0__GETBACKRANKCONFIG_B__0_OFFSET))(this, x);
		}
	};
}
