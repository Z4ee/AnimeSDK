#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudioConfig; }
namespace System { class String; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x118F4390)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS7_0___SETAUDIOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x118F43A0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass7_0_TypeDefinitionIndex = 56756;

class Class_1_6545FC19FD7354A7___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::AudioConfig* audioConfig; // 0x10
	::System::String* groupName; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetAudioState_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS7_0___SETAUDIOSTATE_B__0_OFFSET))(this);
	}
};
