#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillTreePointLevelType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SKILLTREEPOINTPRESET_METHOD_2_3411349B4067679D_OFFSET UNITYSDK_OFFSET(0x18E73190)
#define RPG_GAMECORE_SKILLTREEPOINTPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18E732E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreePointPreset_TypeDefinitionIndex = 17237;

	class SkillTreePointPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Anchor; // 0x10
		::RPG::GameCore::SkillTreePointLevelType LevelType; // 0x18
		::System::UInt32 Level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3411349B4067679D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillTreePointPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillTreePointPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESET_METHOD_2_3411349B4067679D_OFFSET))(a1, a2);
		}
	};
}
