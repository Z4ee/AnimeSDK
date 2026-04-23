#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA45D170)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__DISPLAYCLASS6_0__HANDLEROLEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xA45DFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData___c__DisplayClass6_0_TypeDefinitionIndex = 59280;

	class GridFightBonusResultData___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* roleData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleRoleUpdate_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__DISPLAYCLASS6_0__HANDLEROLEUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
