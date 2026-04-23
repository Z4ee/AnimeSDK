#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEOCCLUDERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8D720)

inline static constexpr unsigned int PvsStageOccluderHandle_TypeDefinitionIndex = 44150;

class PvsStageOccluderHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 Budget; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEOCCLUDERHANDLE__CTOR_OFFSET))(this);
	}
};
