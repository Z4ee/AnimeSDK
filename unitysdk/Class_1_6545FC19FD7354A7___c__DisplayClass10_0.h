#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudioConfig; }
namespace System { class String; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134FB020)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS10_0___SETAUDIOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x134FB030)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass10_0_TypeDefinitionIndex = 60821;

class Class_1_6545FC19FD7354A7___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::String* groupName; // 0x10
	::RPG::GameCore::AudioConfig* audioConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetAudioState_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS10_0___SETAUDIOSTATE_B__0_OFFSET))(this);
	}
};
