#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_METHOD_3_118E20864CEEA88D_OFFSET UNITYSDK_OFFSET(0x17634B90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_METHOD_3_8082694EF7E31C04_OFFSET UNITYSDK_OFFSET(0x17634C60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17634C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaDoorStatusConfig_TypeDefinitionIndex = 16416;

	class RogueModifierModifyPersonaDoorStatusConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_118E20864CEEA88D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_METHOD_3_118E20864CEEA88D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8082694EF7E31C04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaDoorStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONADOORSTATUSCONFIG_METHOD_3_8082694EF7E31C04_OFFSET))(a1, a2);
		}
	};
}
