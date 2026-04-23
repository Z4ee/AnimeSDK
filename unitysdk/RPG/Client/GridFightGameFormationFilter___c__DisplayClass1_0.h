#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__0_OFFSET UNITYSDK_OFFSET(0xA4B9F70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__1_OFFSET UNITYSDK_OFFSET(0xA4B9F80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B8510)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass1_0_TypeDefinitionIndex = 59543;

	class GridFightGameFormationFilter___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameFormation* formation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Apply_b__0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__0_OFFSET))(this, id);
		}

		::System::Boolean _Apply_b__1(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__1_OFFSET))(this, id);
		}
	};
}
