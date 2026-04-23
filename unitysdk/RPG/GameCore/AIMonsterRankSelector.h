#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIMONSTERRANKSELECTOR_METHOD_3_08D433266696ECC3_OFFSET UNITYSDK_OFFSET(0x185F1950)
#define RPG_GAMECORE_AIMONSTERRANKSELECTOR_METHOD_3_1F0E64C38D8AA19E_OFFSET UNITYSDK_OFFSET(0x185F1910)
#define RPG_GAMECORE_AIMONSTERRANKSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIMonsterRankSelector_TypeDefinitionIndex = 14769;

	class AIMonsterRankSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AICompareStrategy PropertyStrategy; // 0x10
		::RPG::GameCore::CompareType CompareType; // 0x14
		::RPG::GameCore::FixPoint CompareValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F0E64C38D8AA19E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIMonsterRankSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIMonsterRankSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR_METHOD_3_1F0E64C38D8AA19E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08D433266696ECC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIMonsterRankSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIMonsterRankSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR_METHOD_3_08D433266696ECC3_OFFSET))(a1, a2);
		}
	};
}
