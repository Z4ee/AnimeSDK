#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkillCharacterScriptConfig_PatternPair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_ADDPAIR_OFFSET UNITYSDK_OFFSET(0x15BB6290)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6330)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_ListPatternPair_TypeDefinitionIndex = 73514;

	class SkillCharacterScriptConfig_ListPatternPair : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>* pairList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR__CTOR_OFFSET))(this);
		}

		::MoleMole::SkillCharacterScriptConfig_PatternPair* AddPair()
		{
			return ((::MoleMole::SkillCharacterScriptConfig_PatternPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_ADDPAIR_OFFSET))(this);
		}
	};
}
