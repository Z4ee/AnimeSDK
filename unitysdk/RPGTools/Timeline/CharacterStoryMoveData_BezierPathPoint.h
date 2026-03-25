#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_BEZIERPATHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3E870)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_BezierPathPoint_TypeDefinitionIndex = 38857;

	class CharacterStoryMoveData_BezierPathPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 ControlPoint1; // 0x1C
		::UnityEngine::Vector3 ControlPoint2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_BEZIERPATHPOINT__CTOR_OFFSET))(this);
		}
	};
}
