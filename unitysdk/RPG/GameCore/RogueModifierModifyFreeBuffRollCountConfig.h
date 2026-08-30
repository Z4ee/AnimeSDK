#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_6EE65AB7FF075DAD_OFFSET UNITYSDK_OFFSET(0x1D3F9F60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_FAC3D9A136EF9311_OFFSET UNITYSDK_OFFSET(0x1D3F9FB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyFreeBuffRollCountConfig_TypeDefinitionIndex = 17757;

	class RogueModifierModifyFreeBuffRollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6EE65AB7FF075DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_6EE65AB7FF075DAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FAC3D9A136EF9311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFreeBuffRollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFREEBUFFROLLCOUNTCONFIG_METHOD_3_FAC3D9A136EF9311_OFFSET))(a1, a2);
		}
	};
}
