#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_31AE857E67D0D246__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AE850)

inline static constexpr unsigned int Class_1_31AE857E67D0D246_TypeDefinitionIndex = 64830;

class Class_1_31AE857E67D0D246 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31AE857E67D0D246__CTOR_OFFSET))(this);
	}
};
