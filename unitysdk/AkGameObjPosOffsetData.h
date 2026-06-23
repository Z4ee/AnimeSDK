#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKGAMEOBJPOSOFFSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E490530)

inline static constexpr unsigned int AkGameObjPosOffsetData_TypeDefinitionIndex = 33154;

class AkGameObjPosOffsetData : public ::UnityEngine::ScriptableObject
{
public:
	::UnityEngine::Vector3 positionOffset; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJPOSOFFSETDATA__CTOR_OFFSET))(this);
	}
};
