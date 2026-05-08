#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6861714BF8809B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1A950)

inline static constexpr unsigned int Class_1_6861714BF8809B2D_TypeDefinitionIndex = 70583;

class Class_1_6861714BF8809B2D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::Config::ScreenEffectType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6861714BF8809B2D__CTOR_OFFSET))(this);
	}
};
