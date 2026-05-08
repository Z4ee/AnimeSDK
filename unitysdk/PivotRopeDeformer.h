#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define PIVOTROPEDEFORMER_UPDATEROPE_OFFSET UNITYSDK_OFFSET(0x19F21560)
#define PIVOTROPEDEFORMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F21500)
#define PIVOTROPEDEFORMER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F21EE0)

inline static constexpr unsigned int PivotRopeDeformer_TypeDefinitionIndex = 29478;

class PivotRopeDeformer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 PivotA; // 0x18
	::UnityEngine::Vector3 PivotB; // 0x24
	::UnityEngine::Transform* TransA; // 0x30
	::UnityEngine::Transform* TransB; // 0x38
	::System::Boolean UpdateEveryFrame; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIVOTROPEDEFORMER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIVOTROPEDEFORMER_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateRope()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIVOTROPEDEFORMER_UPDATEROPE_OFFSET))(this);
	}
};
