#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }

#define CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119163A0)
#define CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS29_0__REPLACECHARACTEREMOTION_B__0_OFFSET UNITYSDK_OFFSET(0x11919F20)

inline static constexpr unsigned int Class_2_9429EF1C44E7EE6D___c__DisplayClass29_0_TypeDefinitionIndex = 46095;

class Class_2_9429EF1C44E7EE6D___c__DisplayClass29_0 : public ::System::Object
{
public:
	::System::String* uniqueName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ReplaceCharacterEmotion_b__0(::RPG::GameCore::CharacterEmoConfig* emoConfig)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS29_0__REPLACECHARACTEREMOTION_B__0_OFFSET))(this, emoConfig);
	}
};
