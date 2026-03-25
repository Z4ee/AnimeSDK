#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1798E0D824491486;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }

#define CLASS_1_529B81A5018A5315___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11879340)
#define CLASS_1_529B81A5018A5315___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x11879390)

inline static constexpr unsigned int Class_1_529B81A5018A5315___c__DisplayClass9_0_TypeDefinitionIndex = 46114;

class Class_1_529B81A5018A5315___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::FreeStyleAnimGroupEventConfig* groupEventConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GenerateClipGroupEvents_b__0(::Class_1_1798E0D824491486* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1798E0D824491486*))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET))(this, item);
	}
};
