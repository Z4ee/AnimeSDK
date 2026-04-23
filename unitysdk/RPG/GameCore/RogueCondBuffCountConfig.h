#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_6_05225DB7E8CFD886_OFFSET UNITYSDK_OFFSET(0x18CF61D0)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_6_33FC108B88E63610_OFFSET UNITYSDK_OFFSET(0x18CF6480)
#define RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF6350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBuffCountConfig_TypeDefinitionIndex = 18784;

	class RogueCondBuffCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_05225DB7E8CFD886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_6_05225DB7E8CFD886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_33FC108B88E63610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBUFFCOUNTCONFIG_METHOD_6_33FC108B88E63610_OFFSET))(a1, a2);
		}
	};
}
