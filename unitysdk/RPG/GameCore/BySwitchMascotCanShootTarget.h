#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET UNITYSDK_OFFSET(0x187600A0)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_DE19627887B8FDBF_OFFSET UNITYSDK_OFFSET(0x1875FFD0)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18760050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySwitchMascotCanShootTarget_TypeDefinitionIndex = 19109;

	class BySwitchMascotCanShootTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DE19627887B8FDBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_DE19627887B8FDBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901F70760B847E95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET))(a1, a2);
		}
	};
}
