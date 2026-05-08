#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneObjectAreaCheckDoEnable_ObecjConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENEOBJECTAREACHECKDOENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB190)

inline static constexpr unsigned int SceneObjectAreaCheckDoEnable_TypeDefinitionIndex = 55896;

class SceneObjectAreaCheckDoEnable : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::SceneObjectAreaCheckDoEnable_ObecjConfig*>* Paths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTAREACHECKDOENABLE__CTOR_OFFSET))(this);
	}
};
