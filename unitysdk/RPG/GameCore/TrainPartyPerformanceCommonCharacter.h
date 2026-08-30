#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyPerformanceCharacter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_METHOD_3_2B9D6B96C5418EB8_OFFSET UNITYSDK_OFFSET(0x1D5E0770)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_METHOD_3_F2A7E3D034DE6444_OFFSET UNITYSDK_OFFSET(0x1D5E0370)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E0360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceCommonCharacter_TypeDefinitionIndex = 16085;

	class TrainPartyPerformanceCommonCharacter : public ::RPG::GameCore::TrainPartyPerformanceCharacter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B9D6B96C5418EB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_METHOD_3_2B9D6B96C5418EB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2A7E3D034DE6444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_METHOD_3_F2A7E3D034DE6444_OFFSET))(a1, a2);
		}
	};
}
