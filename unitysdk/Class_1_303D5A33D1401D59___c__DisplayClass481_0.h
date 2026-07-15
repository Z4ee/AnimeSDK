#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_53BE720C46D20BF8;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS481_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11659730)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS481_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET UNITYSDK_OFFSET(0x11659F30)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass481_0_TypeDefinitionIndex = 70396;

class Class_1_303D5A33D1401D59___c__DisplayClass481_0 : public ::System::Object
{
public:
	::Class_1_53BE720C46D20BF8* block; // 0x10
	::Class_1_303D5A33D1401D59* __4__this; // 0x18
	::UnityEngine::RPGPointCloudGrassBlockData* grassData; // 0x20
	::UnityEngine::GameObject* grassNode; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS481_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPointCloudGrassDataLoaded_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS481_0___ONPOINTCLOUDGRASSDATALOADED_B__0_OFFSET))(this);
	}
};
