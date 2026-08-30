#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_METHOD_3_2ECDE7405E5BAC37_OFFSET UNITYSDK_OFFSET(0x1B311FA0)
#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_METHOD_3_B32DD8AFEC16FF46_OFFSET UNITYSDK_OFFSET(0x1B312040)
#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B312030)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int MarkSectionHasReadStepConfig_TypeDefinitionIndex = 24698;

	class MarkSectionHasReadStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2ECDE7405E5BAC37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_METHOD_3_2ECDE7405E5BAC37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B32DD8AFEC16FF46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_METHOD_3_B32DD8AFEC16FF46_OFFSET))(a1, a2);
		}
	};
}
