#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass478_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS478_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11658E10)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS478_2___SETUPGRASSDATA_B__1_OFFSET UNITYSDK_OFFSET(0x11659C50)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass478_2_TypeDefinitionIndex = 70394;

class Class_1_303D5A33D1401D59___c__DisplayClass478_2 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59___c__DisplayClass478_0* CS___8__locals2; // 0x10
	::UnityEngine::GameObject* grassNode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS478_2__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__1(::UnityEngine::RPGDensityMapGrassBlockData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS478_2___SETUPGRASSDATA_B__1_OFFSET))(this, a1);
	}
};
