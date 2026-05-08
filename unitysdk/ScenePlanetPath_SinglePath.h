#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENEPLANETPATH_SINGLEPATH_ADDPATHPOINT_OFFSET UNITYSDK_OFFSET(0x19F25A50)
#define SCENEPLANETPATH_SINGLEPATH_DELETEPOINT_OFFSET UNITYSDK_OFFSET(0x19F25CE0)
#define SCENEPLANETPATH_SINGLEPATH_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x19F25520)
#define SCENEPLANETPATH_SINGLEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x19F25E40)

inline static constexpr unsigned int ScenePlanetPath_SinglePath_TypeDefinitionIndex = 29494;

class ScenePlanetPath_SinglePath : public ::System::Object
{
public:
	::UnityEngine::Vector3 eulerAngle; // 0x10
	::System::Int32 selectedPoint; // 0x1C
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* targetPoints; // 0x20
	::System::Single timeRotate; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPLANETPATH_SINGLEPATH__CTOR_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 GetLocalToWorldMatrix(::System::Single scale)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SCENEPLANETPATH_SINGLEPATH_GETLOCALTOWORLDMATRIX_OFFSET))(this, scale);
	}

	::System::Void AddPathPoint(::UnityEngine::Vector3 point, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + SCENEPLANETPATH_SINGLEPATH_ADDPATHPOINT_OFFSET))(this, point, index);
	}

	::System::Void DeletePoint(::UnityEngine::Vector3 point)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEPLANETPATH_SINGLEPATH_DELETEPOINT_OFFSET))(this, point);
	}
};
