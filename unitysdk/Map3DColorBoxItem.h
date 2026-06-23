#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MAP3DCOLORBOXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCB440)

inline static constexpr unsigned int Map3DColorBoxItem_TypeDefinitionIndex = 52136;

class Map3DColorBoxItem : public ::System::Object
{
public:
	::UnityEngine::Vector2 edgeX; // 0x10
	::UnityEngine::Vector2 edgeY; // 0x18
	::UnityEngine::Color color; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DCOLORBOXITEM__CTOR_OFFSET))(this);
	}
};
