#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitEffectEnhanceSelectConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2DD90)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___C__DISPLAYCLASS4_0___GETCURRENTOPTIONCONFIGLIST_B__1_OFFSET UNITYSDK_OFFSET(0xBC2DDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseEffect___c__DisplayClass4_0_TypeDefinitionIndex = 61144;

	class GridFightTraitEnhanceChooseEffect___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCurrentOptionConfigList_b__1(::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___C__DISPLAYCLASS4_0___GETCURRENTOPTIONCONFIGLIST_B__1_OFFSET))(this, a1);
		}
	};
}
