#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class CameraPostion;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENECAMERAPOSITIONSSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE909320)

inline static constexpr unsigned int SceneCameraPositionsScriptableObject_TypeDefinitionIndex = 47559;

class SceneCameraPositionsScriptableObject : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::CameraPostion*>* CamPositions; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENECAMERAPOSITIONSSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
	}
};
