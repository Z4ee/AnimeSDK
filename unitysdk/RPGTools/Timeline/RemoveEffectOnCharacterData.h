#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_METHOD_1_4BAF22BA105C0015_OFFSET UNITYSDK_OFFSET(0x199AF3F0)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x199AF4B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectOnCharacterData_TypeDefinitionIndex = 46546;

	class RemoveEffectOnCharacterData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* EffectPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RemoveEffectOnCharacter* Method_1_4BAF22BA105C0015()
		{
			return ((::RPG::GameCore::RemoveEffectOnCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_METHOD_1_4BAF22BA105C0015_OFFSET))(this);
		}
	};
}
