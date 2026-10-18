#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_53BE720C46D20BF8;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS499_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB51C990)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS499_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0xB51DD70)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass499_0_TypeDefinitionIndex = 73913;

class Class_1_303D5A33D1401D59___c__DisplayClass499_0 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59* __4__this; // 0x10
	::UnityEngine::GameObject* grassNode; // 0x18
	::UnityEngine::RPGDensityMapGrassBlockData* grassData; // 0x20
	::Class_1_53BE720C46D20BF8* block; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS499_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDensityMapGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS499_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
