#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LineCurve_MoveType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define LINECURVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FC061C0)
#define LINECURVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FC062D0)
#define LINECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC06820)

inline static constexpr unsigned int LineCurve_TypeDefinitionIndex = 35310;

class LineCurve : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single startWidth; // 0x18
	::System::Single endWidth; // 0x1C
	::System::Single amp; // 0x20
	::UnityEngine::Material* traceMaterial; // 0x28
	::UnityEngine::AnimationCurve* curve; // 0x30
	::UnityEngine::GameObject* targetGO; // 0x38
	::System::Int32 size; // 0x40
	::LineCurve_MoveType moveType; // 0x44
	::System::Single speed; // 0x48
	::System::Single altRotation; // 0x4C
	::UnityEngine::LineRenderer* lrComp; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINECURVE__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINECURVE_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINECURVE_UPDATE_OFFSET))(this);
	}
};
