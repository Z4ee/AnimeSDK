#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace RootMotion::FinalIK { class PenetrationAvoidance_Avoider; }

#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1C141D10)
#define ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141D90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int PenetrationAvoidance_TypeDefinitionIndex = 36720;

	class PenetrationAvoidance : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::PenetrationAvoidance_Avoider*>* avoiders; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_PENETRATIONAVOIDANCE_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
