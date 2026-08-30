#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64D890C466F37235;
namespace System { class String; }

#define CLASS_2_37D832480CB327E1___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94120)
#define CLASS_2_37D832480CB327E1___C__DISPLAYCLASS67_0___STARTMOVEIMPV2_B__0_OFFSET UNITYSDK_OFFSET(0x12E94730)

inline static constexpr unsigned int Class_2_37D832480CB327E1___c__DisplayClass67_0_TypeDefinitionIndex = 57567;

class Class_2_37D832480CB327E1___c__DisplayClass67_0 : public ::System::Object
{
public:
	::System::String* endAnchorName; // 0x10
	::Class_1_64D890C466F37235* mapRotationManager; // 0x18
	::System::String* startAnchorName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartMoveImpV2_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___C__DISPLAYCLASS67_0___STARTMOVEIMPV2_B__0_OFFSET))(this);
	}
};
