#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKGAMEOBJPOSITIONOFFSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B972520)

inline static constexpr unsigned int AkGameObjPositionOffsetData_TypeDefinitionIndex = 42131;

class AkGameObjPositionOffsetData : public ::System::Object
{
public:
	::System::Boolean KeepMe; // 0x10
	::UnityEngine::Vector3 positionOffset; // 0x14

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJPOSITIONOFFSETDATA__CTOR_OFFSET))(this, a1);
	}
};
