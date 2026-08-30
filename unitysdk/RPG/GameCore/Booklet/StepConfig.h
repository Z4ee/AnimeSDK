#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_STEPCONFIG_METHOD_2_16F2BE488661AABC_OFFSET UNITYSDK_OFFSET(0x1CE8CE20)
#define RPG_GAMECORE_BOOKLET_STEPCONFIG_METHOD_2_96C845B804F1D42F_OFFSET UNITYSDK_OFFSET(0x1CE8D730)
#define RPG_GAMECORE_BOOKLET_STEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8CCF0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int StepConfig_TypeDefinitionIndex = 24693;

	class StepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_16F2BE488661AABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::StepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::StepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG_METHOD_2_16F2BE488661AABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_96C845B804F1D42F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::StepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_STEPCONFIG_METHOD_2_96C845B804F1D42F_OFFSET))(a1, a2);
		}
	};
}
