#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC295D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS8_0__SELECTMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0xBC2A000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseEffect___c__DisplayClass8_0_TypeDefinitionIndex = 61127;

	class GridFightTraitCoreRoleChooseEffect___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectMember_b__0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS8_0__SELECTMEMBER_B__0_OFFSET))(this, a1);
		}
	};
}
