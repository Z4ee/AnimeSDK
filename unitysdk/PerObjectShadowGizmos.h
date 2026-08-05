#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PerObjectShadowGizmosContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PEROBJECTSHADOWGIZMOS_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C5A1200)
#define PEROBJECTSHADOWGIZMOS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5A2440)
#define PEROBJECTSHADOWGIZMOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A2430)

inline static constexpr unsigned int PerObjectShadowGizmos_TypeDefinitionIndex = 27659;

class PerObjectShadowGizmos : public ::System::Object
{
public:
	static ::Il2CppArray<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>** StaticGet_wireLines()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowGizmos_TypeDefinitionIndex)->GetStaticField(0x21CC0);
	}
	::System::Int32 index; // 0x10
	::System::Boolean gizmosWorldSpaceBounds; // 0x14
	::System::Boolean gizmosLightSpaceBounds; // 0x15
	::System::Boolean gizmosResolveMesh; // 0x16
	::System::Boolean gizmosWorldToUvBounds; // 0x17
	::System::Boolean gizmosCullingSphere; // 0x18
	::UnityEngine::Vector2Int perObjectShadowResolution; // 0x1C
	::System::Single alpha; // 0x24
	::PerObjectShadowGizmosContext c; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS__CCTOR_OFFSET))();
	}

	::System::Void DrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWGIZMOS_DRAWGIZMOS_OFFSET))(this);
	}
};
