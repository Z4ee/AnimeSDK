#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_METHOD_1_57D6EA0329F3B309_OFFSET UNITYSDK_OFFSET(0xB90DEC0)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB90DFA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectOnCharacterData_TypeDefinitionIndex = 45064;

	class RemoveEffectOnCharacterData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* EffectPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RemoveEffectOnCharacter* Method_1_57D6EA0329F3B309()
		{
			return ((::RPG::GameCore::RemoveEffectOnCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_METHOD_1_57D6EA0329F3B309_OFFSET))(this);
		}
	};
}
