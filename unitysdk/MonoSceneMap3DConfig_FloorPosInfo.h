#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MONOSCENEMAP3DCONFIG_FLOORPOSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE492220)

inline static constexpr unsigned int MonoSceneMap3DConfig_FloorPosInfo_TypeDefinitionIndex = 66978;

class MonoSceneMap3DConfig_FloorPosInfo : public ::System::Object
{
public:
	::UnityEngine::Vector3 Pos; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_FLOORPOSINFO__CTOR_OFFSET))(this);
	}
};
