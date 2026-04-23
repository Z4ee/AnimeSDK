#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B7A10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS10_0__GETSUBTRAITCONFIGBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xA5B7A20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseEffect___c__DisplayClass10_0_TypeDefinitionIndex = 60191;

	class GridFightTraitCoreRoleChooseEffect___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSubTraitConfigByUID_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS10_0__GETSUBTRAITCONFIGBYUID_B__0_OFFSET))(this, x);
		}
	};
}
