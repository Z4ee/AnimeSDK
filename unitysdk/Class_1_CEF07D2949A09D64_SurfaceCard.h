#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A852F50)
#define CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x1A852FE0)
#define CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x1A852FA0)
#define CLASS_1_CEF07D2949A09D64_SURFACECARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A84F3D0)

inline static constexpr unsigned int Class_1_CEF07D2949A09D64_SurfaceCard_TypeDefinitionIndex = 52049;

class Class_1_CEF07D2949A09D64_SurfaceCard : public ::System::Object
{
public:
	::System::Int32 directionIndex; // 0x10
	::System::Int32 clusterIndex; // 0x14
	::UnityEngine::Bounds localBounds; // 0x18
	::UnityEngine::Vector3 direction; // 0x30
	::UnityEngine::RectInt atlasRect; // 0x3C
	::UnityEngine::Vector2 atlasUVMin; // 0x4C
	::UnityEngine::Vector2 atlasUVMax; // 0x54
	::System::Boolean isRotated; // 0x5C
	::UnityEngine::Vector2 originalWorldSize; // 0x60
	::System::Single weightedCoverage; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_SURFACECARD__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_C21A7AC6282FB0D0_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_SURFACECARD_METHOD_1_C21A7AC6282FB0D0_1_OFFSET))(this);
	}
};
