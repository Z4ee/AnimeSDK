#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_34DF227E25B474D4_OFFSET UNITYSDK_OFFSET(0x19AF8DA0)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_70689E45322FB8B9_OFFSET UNITYSDK_OFFSET(0x19AF8B80)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetSavedValueConfig_TypeDefinitionIndex = 18676;

	class RogueActSetSavedValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_70689E45322FB8B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_70689E45322FB8B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_34DF227E25B474D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_34DF227E25B474D4_OFFSET))(a1, a2);
		}
	};
}
