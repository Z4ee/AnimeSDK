#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET UNITYSDK_OFFSET(0x1BC41D40)
#define SUNSHADOWPVSBAKERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41E50)

inline static constexpr unsigned int SunShadowPVSBakeRange_TypeDefinitionIndex = 66706;

class SunShadowPVSBakeRange : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Bounds GetAABB()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET))(this);
	}
};
