#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B8620)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0___FORMATIONHASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xA4B9F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass2_0_TypeDefinitionIndex = 59544;

	class GridFightGameFormationFilter___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FormationHasAvatar_b__0(::Class_2_181F61C600ECA68B* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0___FORMATIONHASAVATAR_B__0_OFFSET))(this, role);
		}
	};
}
