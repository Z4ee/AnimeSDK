#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET UNITYSDK_OFFSET(0x18EDABB0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_BCC72C93EE6CA331_OFFSET UNITYSDK_OFFSET(0x18EE2ED0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDAB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllStanceBreakEntity_TypeDefinitionIndex = 22992;

	class TargetFetchAllStanceBreakEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BCC72C93EE6CA331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_BCC72C93EE6CA331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_126DD3871696484F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_METHOD_4_126DD3871696484F_OFFSET))(a1, a2);
		}
	};
}
