#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MAP3DFOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE73B0)

inline static constexpr unsigned int Map3DFogItem_TypeDefinitionIndex = 47857;

class Map3DFogItem : public ::System::Object
{
public:
	::UnityEngine::Bounds fogBounds; // 0x10
	::System::Single lifeTime; // 0x28
	::System::Single intensity; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DFOGITEM__CTOR_OFFSET))(this);
	}
};
