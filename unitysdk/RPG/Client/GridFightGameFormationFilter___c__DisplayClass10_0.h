#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5CBF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS10_0__REMOVEROLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB5DEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass10_0_TypeDefinitionIndex = 60476;

	class GridFightGameFormationFilter___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveRole_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS10_0__REMOVEROLE_B__0_OFFSET))(this, a1);
		}
	};
}
