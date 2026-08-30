#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BGCurveExtention;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define CURVEMESHGENERATOR_METHOD_5_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xE021100)
#define CURVEMESHGENERATOR_START_OFFSET UNITYSDK_OFFSET(0xE020EB0)
#define CURVEMESHGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xE020F00)
#define CURVEMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE022370)

inline static constexpr unsigned int CurveMeshGenerator_TypeDefinitionIndex = 47727;

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

	::System::Void Method_5_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEMESHGENERATOR_METHOD_5_D308836DB54415C3_OFFSET))(this);
	}
};
