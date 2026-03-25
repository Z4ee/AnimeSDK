#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59___c__DisplayClass443_0;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C8B40)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_1___SETUPGRASSDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA6C9690)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass443_1_TypeDefinitionIndex = 60592;

class Class_1_303D5A33D1401D59___c__DisplayClass443_1 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::Class_1_303D5A33D1401D59___c__DisplayClass443_0* CS___8__locals1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_1__CTOR_OFFSET))(this);
	}

	::System::Void __SetupGrassData_b__0(::UnityEngine::RPGPointCloudGrassBlockData* grassData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGPointCloudGrassBlockData*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS443_1___SETUPGRASSDATA_B__0_OFFSET))(this, grassData);
	}
};
