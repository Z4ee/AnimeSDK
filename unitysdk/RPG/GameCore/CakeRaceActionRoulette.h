#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_604FCDA8BEC22662_OFFSET UNITYSDK_OFFSET(0x1876AD70)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_DAD21B77DDC9E8E2_OFFSET UNITYSDK_OFFSET(0x1876C270)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1876AD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRoulette_TypeDefinitionIndex = 17438;

	class CakeRaceActionRoulette : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RouletteCountWeightMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAD21B77DDC9E8E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRoulette*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRoulette*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_DAD21B77DDC9E8E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_604FCDA8BEC22662(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRoulette* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_604FCDA8BEC22662_OFFSET))(a1, a2);
		}
	};
}
