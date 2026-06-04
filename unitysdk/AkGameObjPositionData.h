#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKGAMEOBJPOSITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B438640)

inline static constexpr unsigned int AkGameObjPositionData_TypeDefinitionIndex = 41315;

class AkGameObjPositionData : public ::System::Object
{
public:
	::UnityEngine::Vector3 up; // 0x10
	::UnityEngine::Vector3 position; // 0x1C
	::UnityEngine::Vector3 forward; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJPOSITIONDATA__CTOR_OFFSET))(this);
	}
};
