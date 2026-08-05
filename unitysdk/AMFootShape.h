#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AMLegIKExt;

#define AMFOOTSHAPE_CALCFOOTPOINTS_OFFSET UNITYSDK_OFFSET(0x12A765D0)
#define AMFOOTSHAPE_HITGROUND_OFFSET UNITYSDK_OFFSET(0x12A77030)
#define AMFOOTSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A765C0)

inline static constexpr unsigned int AMFootShape_TypeDefinitionIndex = 60902;

class AMFootShape : public ::System::Object
{
public:
	::AMLegIKExt* amLegIk; // 0x10
	::UnityEngine::Vector3 heelPos; // 0x18
	::UnityEngine::Vector3 rightSidePos; // 0x24
	::System::Boolean hasToe; // 0x30
	::UnityEngine::Vector3 footPos; // 0x34
	::UnityEngine::Vector3 leftSidePos; // 0x40
	::UnityEngine::Vector3 toePos; // 0x4C
	::UnityEngine::Vector3 frontVector; // 0x58
	::UnityEngine::Vector3 rightVector; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFOOTSHAPE__CTOR_OFFSET))(this);
	}

	::System::Void CalcFootPoints(::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Quaternion footBindRotCompSpaceDelta, ::UnityEngine::Vector3 toeGlobalPos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMFOOTSHAPE_CALCFOOTPOINTS_OFFSET))(this, footGlobalPos, footGlobalRot, footBindRotCompSpaceDelta, toeGlobalPos);
	}

	::System::Void HitGround(::UnityEngine::Vector3 footGlobalPos, ::UnityEngine::Quaternion footGlobalRot, ::UnityEngine::Quaternion footBindRotCompSpaceDelta, ::UnityEngine::Vector3 toeGlobalPos, ::System::Single castHeight, ::UnityEngine::Vector3& hitPos, ::UnityEngine::Vector3& hitNormal)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AMFOOTSHAPE_HITGROUND_OFFSET))(this, footGlobalPos, footGlobalRot, footBindRotCompSpaceDelta, toeGlobalPos, castHeight, hitPos, hitNormal);
	}
};
