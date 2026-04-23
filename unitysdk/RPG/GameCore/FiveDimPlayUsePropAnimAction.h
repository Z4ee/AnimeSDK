#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_3_76E22DFB2C696660_OFFSET UNITYSDK_OFFSET(0x18912DF0)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_3_A72E54BFA138F245_OFFSET UNITYSDK_OFFSET(0x18912EB0)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18912E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayUsePropAnimAction_TypeDefinitionIndex = 17793;

	class FiveDimPlayUsePropAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76E22DFB2C696660(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_3_76E22DFB2C696660_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A72E54BFA138F245(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_3_A72E54BFA138F245_OFFSET))(a1, a2);
		}
	};
}
