#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64D890C466F37235;
namespace System { class String; }

#define CLASS_2_301B02160CBCFE73___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1331E260)
#define CLASS_2_301B02160CBCFE73___C__DISPLAYCLASS67_0___STARTMOVEIMPV2_B__0_OFFSET UNITYSDK_OFFSET(0x1331E880)

inline static constexpr unsigned int Class_2_301B02160CBCFE73___c__DisplayClass67_0_TypeDefinitionIndex = 57412;

class Class_2_301B02160CBCFE73___c__DisplayClass67_0 : public ::System::Object
{
public:
	::System::String* endAnchorName; // 0x10
	::System::String* startAnchorName; // 0x18
	::Class_1_64D890C466F37235* mapRotationManager; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartMoveImpV2_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73___C__DISPLAYCLASS67_0___STARTMOVEIMPV2_B__0_OFFSET))(this);
	}
};
