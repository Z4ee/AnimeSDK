#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_GAMEOBJECTPOSITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC2230)

namespace MoleMole
{
	inline static constexpr unsigned int GameObjectPositionData_TypeDefinitionIndex = 41648;

	class GameObjectPositionData : public ::System::Object
	{
	public:
		::System::String* GameObjectName; // 0x10
		::UnityEngine::Vector3 PositionData; // 0x18
		::UnityEngine::Vector3 RotationData; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEOBJECTPOSITIONDATA__CTOR_OFFSET))(this);
		}
	};
}
