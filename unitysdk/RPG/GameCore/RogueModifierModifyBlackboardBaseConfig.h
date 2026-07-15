#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_METHOD_3_98E373A1B6791048_OFFSET UNITYSDK_OFFSET(0x1D163750)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_METHOD_3_EC23DA1C238D7CB2_OFFSET UNITYSDK_OFFSET(0x1D1635E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardBaseConfig_TypeDefinitionIndex = 16981;

	class RogueModifierModifyBlackboardBaseConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC23DA1C238D7CB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_METHOD_3_EC23DA1C238D7CB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98E373A1B6791048(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBASECONFIG_METHOD_3_98E373A1B6791048_OFFSET))(a1, a2);
		}
	};
}
