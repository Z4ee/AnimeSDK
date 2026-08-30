#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_METHOD_2_803A4E060E834D6A_OFFSET UNITYSDK_OFFSET(0x1EE89EF0)
#define RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionWeightConfig_TypeDefinitionIndex = 19470;

	class RogueActionWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_803A4E060E834D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONWEIGHTCONFIG_METHOD_2_803A4E060E834D6A_OFFSET))(a1, a2);
		}
	};
}
