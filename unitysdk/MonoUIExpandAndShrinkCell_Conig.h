#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONOUIEXPANDANDSHRINKCELL_CONIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4CBB0)

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_Conig_TypeDefinitionIndex = 51170;

class MonoUIExpandAndShrinkCell_Conig : public ::System::Object
{
public:
	::System::Single fadeInTime; // 0x10
	::System::String* fadeInCurveKey; // 0x18
	::System::String* fadeInAnimName; // 0x20
	::System::Single fadeOutTime; // 0x28
	::System::String* fadeOutCurveKey; // 0x30
	::System::String* fadeOutAnimName; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIEXPANDANDSHRINKCELL_CONIG__CTOR_OFFSET))(this);
	}
};
