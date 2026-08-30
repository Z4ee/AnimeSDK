#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOAUTOMOVEANDROTATE_VECTOR3ANDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2BC90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAutoMoveAndRotate_Vector3andSpace_TypeDefinitionIndex = 69813;

	class MonoAutoMoveAndRotate_Vector3andSpace : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 value; // 0x10
		::UnityEngine::Space space; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOAUTOMOVEANDROTATE_VECTOR3ANDSPACE__CTOR_OFFSET))(this);
		}
	};
}
