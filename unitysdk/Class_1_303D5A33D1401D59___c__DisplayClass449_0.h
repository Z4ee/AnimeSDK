#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS449_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119CB3D0)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS449_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0x119CBC60)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass449_0_TypeDefinitionIndex = 68031;

class Class_1_303D5A33D1401D59___c__DisplayClass449_0 : public ::System::Object
{
public:
	::UnityEngine::RPGDensityMapGrassBlockData* grassData; // 0x10
	::RPG::GameCore::BlockConfig* block; // 0x18
	::UnityEngine::GameObject* grassNode; // 0x20
	::Class_1_303D5A33D1401D59* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS449_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDensityMapGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS449_0___ONDENSITYMAPGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
