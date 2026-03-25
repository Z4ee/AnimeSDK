#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudioConfig; }
namespace System { class String; }

#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111AB240)
#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS7_0___SETAUDIOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x111C5BA0)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F___c__DisplayClass7_0_TypeDefinitionIndex = 49197;

class Class_1_D16B8A42F6BB9A9F___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::String* groupName; // 0x10
	::RPG::GameCore::AudioConfig* audioConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetAudioState_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS7_0___SETAUDIOSTATE_B__0_OFFSET))(this);
	}
};
