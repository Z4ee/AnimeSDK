#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass462_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_2__CTOR_OFFSET UNITYSDK_OFFSET(0x145F1DC0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_2___SETUPGRASSDATA_B__1_OFFSET UNITYSDK_OFFSET(0x145F2A40)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass462_2_TypeDefinitionIndex = 68989;

class Class_1_303D5A33D1401D59___c__DisplayClass462_2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::Class_1_303D5A33D1401D59___c__DisplayClass462_0* CS___8__locals2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_2__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__1(::UnityEngine::RPGDensityMapGrassBlockData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_2___SETUPGRASSDATA_B__1_OFFSET))(this, a1);
	}
};
