#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AITakenDamageStatisticType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AITAKENDAMAGESELECTOR_METHOD_3_807850A358715380_OFFSET UNITYSDK_OFFSET(0x1D324EB0)
#define RPG_GAMECORE_AITAKENDAMAGESELECTOR_METHOD_3_CB16FD9557B17117_OFFSET UNITYSDK_OFFSET(0x1D324530)
#define RPG_GAMECORE_AITAKENDAMAGESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D324520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITakenDamageSelector_TypeDefinitionIndex = 15428;

	class AITakenDamageSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AITakenDamageStatisticType StatisticType; // 0x10
		::RPG::GameCore::AICompareStrategy CompareStrategy; // 0x14
		::System::Boolean InverseResultFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_807850A358715380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITakenDamageSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITakenDamageSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR_METHOD_3_807850A358715380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB16FD9557B17117(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITakenDamageSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITakenDamageSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR_METHOD_3_CB16FD9557B17117_OFFSET))(a1, a2);
		}
	};
}
