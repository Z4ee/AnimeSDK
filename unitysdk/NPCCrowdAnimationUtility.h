#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

#define NPCCROWDANIMATIONUTILITY_RESIZETRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0x10CB3D60)
#define NPCCROWDANIMATIONUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB3EF0)

inline static constexpr unsigned int NPCCrowdAnimationUtility_TypeDefinitionIndex = 72745;

class NPCCrowdAnimationUtility : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDANIMATIONUTILITY__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Jobs::TransformAccessArray ResizeTransformAccessArray(::UnityEngine::Jobs::TransformAccessArray previousArray, ::System::Int32 newSize)
	{
		return ((::UnityEngine::Jobs::TransformAccessArray(*)(::UnityEngine::Jobs::TransformAccessArray, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWDANIMATIONUTILITY_RESIZETRANSFORMACCESSARRAY_OFFSET))(previousArray, newSize);
	}
};
