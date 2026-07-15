#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_METHOD_3_4C5314B819103160_OFFSET UNITYSDK_OFFSET(0x1A404860)
#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_METHOD_3_6706F6DA5A60E725_OFFSET UNITYSDK_OFFSET(0x1A4047C0)
#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A404850)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int MarkSpreadHasReadStepConfig_TypeDefinitionIndex = 24110;

	class MarkSpreadHasReadStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6706F6DA5A60E725(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_METHOD_3_6706F6DA5A60E725_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C5314B819103160(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_METHOD_3_4C5314B819103160_OFFSET))(a1, a2);
		}
	};
}
