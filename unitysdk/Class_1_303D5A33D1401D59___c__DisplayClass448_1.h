#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass448_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_1__CTOR_OFFSET UNITYSDK_OFFSET(0x119CB0A0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_1___SETUPGRASSDATA_B__0_OFFSET UNITYSDK_OFFSET(0x119CBBE0)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass448_1_TypeDefinitionIndex = 68029;

class Class_1_303D5A33D1401D59___c__DisplayClass448_1 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::Class_1_303D5A33D1401D59___c__DisplayClass448_0* CS___8__locals1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_1__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__0(::UnityEngine::RPGPointCloudGrassBlockData* grassData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGPointCloudGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS448_1___SETUPGRASSDATA_B__0_OFFSET))(this, grassData);
	}
};
