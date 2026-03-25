#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_2C01EA1AF3BDA280_OFFSET UNITYSDK_OFFSET(0x1706FD00)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_B2525A63B6135506_OFFSET UNITYSDK_OFFSET(0x17068FD0)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17068FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig_TypeDefinitionIndex = 15127;

	class CharacterOverrideConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x200
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x208
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x210
		::Class_1_2CAAA2FDF9170110* AdditiveDynamicValues; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C01EA1AF3BDA280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_2C01EA1AF3BDA280_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2525A63B6135506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOverrideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_METHOD_3_B2525A63B6135506_OFFSET))(a1, a2);
		}
	};
}
