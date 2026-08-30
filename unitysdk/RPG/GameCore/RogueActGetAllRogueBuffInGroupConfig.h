#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_5157B48580DA42C8_OFFSET UNITYSDK_OFFSET(0x1EE85350)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_DCA541E30325294C_OFFSET UNITYSDK_OFFSET(0x1EE85300)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetAllRogueBuffInGroupConfig_TypeDefinitionIndex = 19362;

	class RogueActGetAllRogueBuffInGroupConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DCA541E30325294C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_DCA541E30325294C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5157B48580DA42C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_5157B48580DA42C8_OFFSET))(a1, a2);
		}
	};
}
