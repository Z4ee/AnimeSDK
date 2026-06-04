#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BGCurveExtention;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define CURVEMESHGENERATOR_METHOD_5_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xC759720)
#define CURVEMESHGENERATOR_START_OFFSET UNITYSDK_OFFSET(0xC7594D0)
#define CURVEMESHGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xC759520)
#define CURVEMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC75AA30)

inline static constexpr unsigned int CurveMeshGenerator_TypeDefinitionIndex = 44605;

class CurveMeshGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::BGCurveExtention* curve; // 0x18
	::BansheeGz::BGSpline::Components::BGCcMath* curMath; // 0x20
	::System::Single meshGeneratediv; // 0x28
	::UnityEngine::MeshRenderer* meshRender; // 0x30
	::UnityEngine::MeshFilter* meshFilter; // 0x38
	::UnityEngine::Material* material; // 0x40
	::System::Single uCoordinateStart; // 0x48
	::System::Single uCoordinateEnd; // 0x4C
	::System::Single vCoordinateScale; // 0x50
	::System::Boolean needAdd; // 0x54
	::System::Boolean NeedGenerate; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEMESHGENERATOR__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEMESHGENERATOR_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEMESHGENERATOR_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEMESHGENERATOR_METHOD_5_7B411317D337F87A_OFFSET))(this);
	}
};
