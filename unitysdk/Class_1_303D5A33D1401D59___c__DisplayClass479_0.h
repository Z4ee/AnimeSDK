#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_53BE720C46D20BF8;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS479_0__CTOR_OFFSET UNITYSDK_OFFSET(0x116592A0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS479_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0x11659C90)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass479_0_TypeDefinitionIndex = 70395;

class Class_1_303D5A33D1401D59___c__DisplayClass479_0 : public ::System::Object
{
public:
	::UnityEngine::RPGDensityMapGrassBlockData* grassData; // 0x10
	::Class_1_303D5A33D1401D59* __4__this; // 0x18
	::UnityEngine::GameObject* grassNode; // 0x20
	::Class_1_53BE720C46D20BF8* block; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS479_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDensityMapGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS479_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
