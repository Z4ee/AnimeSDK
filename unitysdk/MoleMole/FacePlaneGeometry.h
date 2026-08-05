#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ContourXZ; }

#define MOLEMOLE_FACEPLANEGEOMETRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82B060)

namespace MoleMole
{
	inline static constexpr unsigned int FacePlaneGeometry_TypeDefinitionIndex = 74815;

	class FacePlaneGeometry : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 planeNormal; // 0x10
		::System::Single planeDistance; // 0x1C
		::Il2CppArray<::UnityEngine::Vector2>* outerContourXZ; // 0x20
		::Il2CppArray<::MoleMole::ContourXZ*>* holeContoursXZ; // 0x28
		::UnityEngine::Vector2 aabbMin; // 0x30
		::UnityEngine::Vector2 aabbMax; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FACEPLANEGEOMETRY__CTOR_OFFSET))(this);
		}
	};
}
