#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEventPattern; }
namespace System { class String; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_GETNAME_OFFSET UNITYSDK_OFFSET(0x1386BFA0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1386BFF0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_PatternPair_TypeDefinitionIndex = 73511;

	class SkillCharacterScriptConfig_PatternPair : public ::System::Object
	{
	public:
		::System::String* stateName; // 0x10
		::System::String* pattern; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR__CTOR_OFFSET))(this);
		}

		static ::System::String* GetName(::MoleMole::Config::AnimatorEventPattern* animatorEventPattern)
		{
			return ((::System::String*(*)(::MoleMole::Config::AnimatorEventPattern*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_GETNAME_OFFSET))(animatorEventPattern);
		}
	};
}
