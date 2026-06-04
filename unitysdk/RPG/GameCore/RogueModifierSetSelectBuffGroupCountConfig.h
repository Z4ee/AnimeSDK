#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_METHOD_3_2866AD7D95FCEBD7_OFFSET UNITYSDK_OFFSET(0x19B9CC30)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_METHOD_3_C3D3F9AB4313A6DE_OFFSET UNITYSDK_OFFSET(0x19B9CB60)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9CBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffGroupCountConfig_TypeDefinitionIndex = 17079;

	class RogueModifierSetSelectBuffGroupCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3D3F9AB4313A6DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_METHOD_3_C3D3F9AB4313A6DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2866AD7D95FCEBD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffGroupCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFGROUPCOUNTCONFIG_METHOD_3_2866AD7D95FCEBD7_OFFSET))(a1, a2);
		}
	};
}
