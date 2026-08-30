#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }

#define CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC30B550)
#define CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS36_0__REPLACECHARACTEREMOTION_B__0_OFFSET UNITYSDK_OFFSET(0xC30EBD0)

inline static constexpr unsigned int Class_2_C52C03D5A2B32952___c__DisplayClass36_0_TypeDefinitionIndex = 57402;

class Class_2_C52C03D5A2B32952___c__DisplayClass36_0 : public ::System::Object
{
public:
	::System::String* uniqueName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ReplaceCharacterEmotion_b__0(::RPG::GameCore::CharacterEmoConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS36_0__REPLACECHARACTEREMOTION_B__0_OFFSET))(this, a1);
	}
};
