#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_5157B48580DA42C8_OFFSET UNITYSDK_OFFSET(0x18CC1290)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_F947CBD704FFCD75_OFFSET UNITYSDK_OFFSET(0x18CC1070)
#define RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC11B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetAllRogueBuffInGroupConfig_TypeDefinitionIndex = 18594;

	class RogueActGetAllRogueBuffInGroupConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F947CBD704FFCD75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_F947CBD704FFCD75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5157B48580DA42C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllRogueBuffInGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLROGUEBUFFINGROUPCONFIG_METHOD_6_5157B48580DA42C8_OFFSET))(a1, a2);
		}
	};
}
