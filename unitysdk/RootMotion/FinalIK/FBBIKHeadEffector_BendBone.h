#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C345450)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1C345410)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3453F0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3453D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBBIKHeadEffector_BendBone_TypeDefinitionIndex = 36595;

	class FBBIKHeadEffector_BendBone : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Quaternion defaultLocalRotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE__CTOR_1_OFFSET))(this, transform, weight);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_BENDBONE_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
