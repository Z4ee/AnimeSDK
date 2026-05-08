#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_EQUALS_OFFSET UNITYSDK_OFFSET(0x746F30)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x746F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderTypeCompare_TypeDefinitionIndex = 73945;

	struct alignas(1) AnimatorZoneChangeColliderSize_ColliderTypeCompare
	{
		::System::Boolean Equals(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType a, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType b)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType obj)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
