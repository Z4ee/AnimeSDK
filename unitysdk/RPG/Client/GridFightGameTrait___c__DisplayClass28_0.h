#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8C640)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0___TRYGETFRONTBACKSWITCHROLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB8C8F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0___TRYGETFRONTBACKSWITCHROLE_B__1_OFFSET UNITYSDK_OFFSET(0xBB8C920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass28_0_TypeDefinitionIndex = 61155;

	class GridFightGameTrait___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleSwitchConfigRow* row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetFrontBackSwitchRole_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0___TRYGETFRONTBACKSWITCHROLE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __TryGetFrontBackSwitchRole_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0___TRYGETFRONTBACKSWITCHROLE_B__1_OFFSET))(this, a1);
		}
	};
}
