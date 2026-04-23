#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_METHOD_3_DB78F0A518DDCB20_OFFSET UNITYSDK_OFFSET(0x18710F00)
#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_METHOD_3_E2C3352106F5B96C_OFFSET UNITYSDK_OFFSET(0x18710E30)
#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18710EF0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int FadeInStepConfig_TypeDefinitionIndex = 23784;

	class FadeInStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::UInt32 ElementID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2C3352106F5B96C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::FadeInStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::FadeInStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_METHOD_3_E2C3352106F5B96C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB78F0A518DDCB20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::FadeInStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_METHOD_3_DB78F0A518DDCB20_OFFSET))(a1, a2);
		}
	};
}
