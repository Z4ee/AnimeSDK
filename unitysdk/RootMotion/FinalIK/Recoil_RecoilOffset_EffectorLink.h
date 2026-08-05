#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_EFFECTORLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F1F40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Recoil_RecoilOffset_EffectorLink_TypeDefinitionIndex = 38827;

	class Recoil_RecoilOffset_EffectorLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedEffector effector; // 0x10
		::System::Single weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_EFFECTORLINK__CTOR_OFFSET))(this);
		}
	};
}
