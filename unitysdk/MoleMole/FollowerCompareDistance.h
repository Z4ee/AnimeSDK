#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CompareDistance.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x138343A0)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x13834430)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x138344C0)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x13834560)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x13834590)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerCompareDistance_TypeDefinitionIndex = 78420;

	class FollowerCompareDistance : public ::MoleMole::CompareDistance
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTarget1Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET1POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTarget2Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET2POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 __base_GetTarget1Pos(::System::Boolean& P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET1POS_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __base_GetTarget2Pos(::System::Boolean& P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET2POS_OFFSET))(this, P0);
		}
	};
}
