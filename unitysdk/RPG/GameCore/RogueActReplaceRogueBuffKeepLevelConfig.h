#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_3434E174CF06A5E0_OFFSET UNITYSDK_OFFSET(0x1EE88C10)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_736CF61DF5C46AA4_OFFSET UNITYSDK_OFFSET(0x1EE88BC0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueBuffKeepLevelConfig_TypeDefinitionIndex = 19364;

	class RogueActReplaceRogueBuffKeepLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_736CF61DF5C46AA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_736CF61DF5C46AA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3434E174CF06A5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_6_3434E174CF06A5E0_OFFSET))(a1, a2);
		}
	};
}
