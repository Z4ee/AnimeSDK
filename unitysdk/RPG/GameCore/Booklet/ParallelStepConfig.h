#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_8C2E079E2F03D321_OFFSET UNITYSDK_OFFSET(0x18711490)
#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_A8163298E0BF48A9_OFFSET UNITYSDK_OFFSET(0x187114F0)
#define RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187114E0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ParallelStepConfig_TypeDefinitionIndex = 23782;

	class ParallelStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* Children; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C2E079E2F03D321(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ParallelStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ParallelStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_8C2E079E2F03D321_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8163298E0BF48A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ParallelStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ParallelStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PARALLELSTEPCONFIG_METHOD_3_A8163298E0BF48A9_OFFSET))(a1, a2);
		}
	};
}
