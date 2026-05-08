#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace RootMotion::FinalIK { class Inertia_Body; }
namespace RootMotion::FinalIK { class OffsetModifier_OffsetLimits; }

#define ROOTMOTION_FINALIK_INERTIA_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1C2E2500)
#define ROOTMOTION_FINALIK_INERTIA_RESETBODIES_OFFSET UNITYSDK_OFFSET(0x1C2E2480)
#define ROOTMOTION_FINALIK_INERTIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E25C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Inertia_TypeDefinitionIndex = 36708;

	class Inertia : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::Inertia_Body*>* bodies; // 0x30
		::Il2CppArray<::RootMotion::FinalIK::OffsetModifier_OffsetLimits*>* limits; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA__CTOR_OFFSET))(this);
		}

		::System::Void ResetBodies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_RESETBODIES_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INERTIA_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
