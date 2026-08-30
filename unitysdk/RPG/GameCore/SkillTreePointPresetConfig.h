#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillTreePointPreset; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_METHOD_2_2747901DC1C06D64_OFFSET UNITYSDK_OFFSET(0x1D53B690)
#define RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53B7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreePointPresetConfig_TypeDefinitionIndex = 17925;

	class SkillTreePointPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* DisplayName; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillTreePointPreset*>* PresetList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2747901DC1C06D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillTreePointPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillTreePointPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESETCONFIG_METHOD_2_2747901DC1C06D64_OFFSET))(a1, a2);
		}
	};
}
