#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98BEBB0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS103_0___GETGRIDBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x98C00D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass103_0_TypeDefinitionIndex = 52915;

	class GridFightTeam___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetGridByUID_b__0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS103_0___GETGRIDBYUID_B__0_OFFSET))(this, x);
		}
	};
}
