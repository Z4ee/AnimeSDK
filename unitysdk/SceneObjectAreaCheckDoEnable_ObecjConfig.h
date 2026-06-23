#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENEOBJECTAREACHECKDOENABLE_OBECJCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4DAD0)

inline static constexpr unsigned int SceneObjectAreaCheckDoEnable_ObecjConfig_TypeDefinitionIndex = 78071;

class SceneObjectAreaCheckDoEnable_ObecjConfig : public ::System::Object
{
public:
	::System::String* path; // 0x10
	::System::Boolean ExitIsEnable; // 0x18
	::System::Boolean EnterIsEnable; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTAREACHECKDOENABLE_OBECJCONFIG__CTOR_OFFSET))(this);
	}
};
