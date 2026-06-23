#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define MOLEMOLE_FACEPLANEGEOMETRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A018B10)

namespace MoleMole
{
	inline static constexpr unsigned int FacePlaneGeometry_TypeDefinitionIndex = 65695;

	class FacePlaneGeometry : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 planeNormal; // 0x10
		::System::Single planeDistance; // 0x1C
		::Il2CppArray<::UnityEngine::Vector2>* verticesXZ; // 0x20
		::Il2CppArray<::UnityEngine::Vector3Int>* triangleIndicesXZ; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* outerContourXZ; // 0x30
		::UnityEngine::Vector2 aabbMin; // 0x38
		::UnityEngine::Vector2 aabbMax; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FACEPLANEGEOMETRY__CTOR_OFFSET))(this);
		}
	};
}
