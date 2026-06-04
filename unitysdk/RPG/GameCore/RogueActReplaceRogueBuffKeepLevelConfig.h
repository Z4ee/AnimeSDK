#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_3434E174CF06A5E0_OFFSET UNITYSDK_OFFSET(0x19AF7C20)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_844B5EA46D9521ED_OFFSET UNITYSDK_OFFSET(0x19AF7A00)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF7B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueBuffKeepLevelConfig_TypeDefinitionIndex = 18563;

	class RogueActReplaceRogueBuffKeepLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_844B5EA46D9521ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_844B5EA46D9521ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3434E174CF06A5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_3434E174CF06A5E0_OFFSET))(a1, a2);
		}
	};
}
