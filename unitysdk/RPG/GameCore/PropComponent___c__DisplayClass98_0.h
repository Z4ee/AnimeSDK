#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6_11;
namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE6CAD40)
#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS98_0___ONDOGACHAINROLLSHOPSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xE6D6C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent___c__DisplayClass98_0_TypeDefinitionIndex = 57526;

	class PropComponent___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* __4__this; // 0x10
		::Class_1_C821CB457FB5EBC6_11* rsp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnDoGachaInRollShopScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS98_0___ONDOGACHAINROLLSHOPSCRSP_B__0_OFFSET))(this);
		}
	};
}
