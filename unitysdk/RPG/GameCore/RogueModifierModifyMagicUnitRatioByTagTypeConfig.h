#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_METHOD_3_CCFA8D5B1AF68609_OFFSET UNITYSDK_OFFSET(0x1D163E80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_METHOD_3_DAD16432DAFF640D_OFFSET UNITYSDK_OFFSET(0x1D163ED0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitRatioByTagTypeConfig_TypeDefinitionIndex = 17023;

	class RogueModifierModifyMagicUnitRatioByTagTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCFA8D5B1AF68609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_METHOD_3_CCFA8D5B1AF68609_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAD16432DAFF640D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitRatioByTagTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITRATIOBYTAGTYPECONFIG_METHOD_3_DAD16432DAFF640D_OFFSET))(a1, a2);
		}
	};
}
