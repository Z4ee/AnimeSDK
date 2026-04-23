#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass448_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_2__CTOR_OFFSET UNITYSDK_OFFSET(0x119CB0B0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_2___SETUPGRASSDATA_B__1_OFFSET UNITYSDK_OFFSET(0x119CBC20)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass448_2_TypeDefinitionIndex = 68030;

class Class_1_303D5A33D1401D59___c__DisplayClass448_2 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59___c__DisplayClass448_0* CS___8__locals2; // 0x10
	::UnityEngine::GameObject* grassNode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_2__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__1(::UnityEngine::RPGDensityMapGrassBlockData* grassData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_2___SETUPGRASSDATA_B__1_OFFSET))(this, grassData);
	}
};
