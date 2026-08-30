#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_4D09F7921760BD94_OFFSET UNITYSDK_OFFSET(0x1CE8C410)
#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_AFC466BD867B54C4_OFFSET UNITYSDK_OFFSET(0x1CE8C3B0)
#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8C400)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ParallelStepConfig_TypeDefinitionIndex = 24695;

	class ParallelStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* Children; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFC466BD867B54C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ParallelStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ParallelStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_AFC466BD867B54C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D09F7921760BD94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ParallelStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ParallelStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_4D09F7921760BD94_OFFSET))(a1, a2);
		}
	};
}
