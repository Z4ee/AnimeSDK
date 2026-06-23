#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObjectPlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }

#define SCREENPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AA070)

inline static constexpr unsigned int ScreenPlayData_TypeDefinitionIndex = 77904;

class ScreenPlayData : public ::System::Object
{
public:
	::ObjectPlayType playType; // 0x10
	::System::String* resUrl; // 0x18
	::System::Action* onSuccess; // 0x20
	::System::Action* onWillStart; // 0x28
	::System::Boolean isLoop; // 0x30
	::System::Single delayTime; // 0x34
	::UnityEngine::Color editorColor; // 0x38
	::System::Boolean isOverrideConfigLoop; // 0x48
	::System::Boolean muteSound; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENPLAYDATA__CTOR_OFFSET))(this);
	}
};
