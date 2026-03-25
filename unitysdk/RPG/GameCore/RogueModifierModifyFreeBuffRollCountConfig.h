#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_27596E8D1AE38478_OFFSET UNITYSDK_OFFSET(0x176342D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_FAC3D9A136EF9311_OFFSET UNITYSDK_OFFSET(0x176343A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17634350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyFreeBuffRollCountConfig_TypeDefinitionIndex = 16511;

	class RogueModifierModifyFreeBuffRollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27596E8D1AE38478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_27596E8D1AE38478_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FAC3D9A136EF9311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_FAC3D9A136EF9311_OFFSET))(a1, a2);
		}
	};
}
