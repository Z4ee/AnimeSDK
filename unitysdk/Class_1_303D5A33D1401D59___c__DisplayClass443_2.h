#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass443_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C8B50)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_2___SETUPGRASSDATA_B__1_OFFSET UNITYSDK_OFFSET(0xA6C96D0)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass443_2_TypeDefinitionIndex = 60593;

class Class_1_303D5A33D1401D59___c__DisplayClass443_2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::Class_1_303D5A33D1401D59___c__DisplayClass443_0* CS___8__locals2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_2__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__1(::UnityEngine::RPGDensityMapGrassBlockData* grassData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_2___SETUPGRASSDATA_B__1_OFFSET))(this, grassData);
	}
};
