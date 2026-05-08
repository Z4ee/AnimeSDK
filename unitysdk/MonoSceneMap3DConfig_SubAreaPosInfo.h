#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MONOSCENEMAP3DCONFIG_SUBAREAPOSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE86CCD0)

inline static constexpr unsigned int MonoSceneMap3DConfig_SubAreaPosInfo_TypeDefinitionIndex = 66980;

class MonoSceneMap3DConfig_SubAreaPosInfo : public ::System::Object
{
public:
	::UnityEngine::Vector3 Pos; // 0x10
	::UnityEngine::Vector3 Euler; // 0x1C
	::UnityEngine::Vector3 LocalScale; // 0x28
	::System::Int32 AreaId; // 0x34
	::System::Int32 FromLayerIndex; // 0x38
	::System::Int32 NextLayerIndex; // 0x3C
	::System::Int32 ClickToSpecialLayerIndex; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_SUBAREAPOSINFO__CTOR_OFFSET))(this);
	}
};
