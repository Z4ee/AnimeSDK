#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6DD9E87A8E7E4302_OFFSET UNITYSDK_OFFSET(0x18ED8420)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_ADC3A7BB2C270FB0_OFFSET UNITYSDK_OFFSET(0x18EE1B90)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED83D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAllNPCMonsters_TypeDefinitionIndex = 22849;

	class TargetFetchAdvAllNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ADC3A7BB2C270FB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_ADC3A7BB2C270FB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DD9E87A8E7E4302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6DD9E87A8E7E4302_OFFSET))(a1, a2);
		}
	};
}
