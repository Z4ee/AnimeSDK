#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace RootMotion::FinalIK { class Amplifier_Body; }

#define ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1E0066F0)
#define ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E006880)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Amplifier_TypeDefinitionIndex = 38325;

	class Amplifier : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::Amplifier_Body*>* bodies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
