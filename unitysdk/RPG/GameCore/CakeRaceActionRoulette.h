#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_425757C2E659D467_OFFSET UNITYSDK_OFFSET(0x195E6820)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_A3503153307DFBF9_OFFSET UNITYSDK_OFFSET(0x195E8220)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x195E6800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRoulette_TypeDefinitionIndex = 17441;

	class CakeRaceActionRoulette : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RouletteCountWeightMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3503153307DFBF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRoulette*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRoulette*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_A3503153307DFBF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_425757C2E659D467(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRoulette* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_METHOD_3_425757C2E659D467_OFFSET))(a1, a2);
		}
	};
}
