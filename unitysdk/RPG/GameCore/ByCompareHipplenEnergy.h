#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameEnergyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET UNITYSDK_OFFSET(0x18730250)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A5FCCD8A81512DCD_OFFSET UNITYSDK_OFFSET(0x18730180)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x18730200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHipplenEnergy_TypeDefinitionIndex = 20304;

	class ByCompareHipplenEnergy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::HipplenGameEnergyType ExpectedType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A5FCCD8A81512DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A5FCCD8A81512DCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E8B6646498E3CD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET))(a1, a2);
		}
	};
}
