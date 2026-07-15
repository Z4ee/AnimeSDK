#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF881A12952D8CEA;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }

#define CLASS_1_CFAC95D8FB30DDF0___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16873D10)
#define CLASS_1_CFAC95D8FB30DDF0___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x16873D60)

inline static constexpr unsigned int Class_1_CFAC95D8FB30DDF0___c__DisplayClass9_0_TypeDefinitionIndex = 54700;

class Class_1_CFAC95D8FB30DDF0___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::FreeStyleAnimGroupEventConfig* groupEventConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GenerateClipGroupEvents_b__0(::Class_1_EF881A12952D8CEA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF881A12952D8CEA*))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET))(this, a1);
	}
};
