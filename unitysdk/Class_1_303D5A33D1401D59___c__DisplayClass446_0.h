#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS446_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C9190)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS446_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0xA6C9850)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass446_0_TypeDefinitionIndex = 60595;

class Class_1_303D5A33D1401D59___c__DisplayClass446_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* grassNode; // 0x10
	::Class_1_303D5A33D1401D59* __4__this; // 0x18
	::UnityEngine::RPGPointCloudGrassBlockData* grassData; // 0x20
	::RPG::GameCore::BlockConfig* block; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS446_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPointCloudGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS446_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
