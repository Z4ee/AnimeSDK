#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass462_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_1__CTOR_OFFSET UNITYSDK_OFFSET(0x145F1DB0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_1___SETUPGRASSDATA_B__0_OFFSET UNITYSDK_OFFSET(0x145F2A00)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass462_1_TypeDefinitionIndex = 68988;

class Class_1_303D5A33D1401D59___c__DisplayClass462_1 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59___c__DisplayClass462_0* CS___8__locals1; // 0x10
	::UnityEngine::GameObject* grassNode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_1__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__0(::UnityEngine::RPGPointCloudGrassBlockData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGPointCloudGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS462_1___SETUPGRASSDATA_B__0_OFFSET))(this, a1);
	}
};
