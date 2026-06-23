#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RAYCASTHITCOMPARE_COMPARE_OFFSET UNITYSDK_OFFSET(0x173FD1C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RAYCASTHITCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x173FD2B0)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_RaycastHitCompare_TypeDefinitionIndex = 54032;

	class ShootingGroundSubsystem_RaycastHitCompare : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RAYCASTHITCOMPARE__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RAYCASTHITCOMPARE_COMPARE_OFFSET))(this, x, y);
		}
	};
}
