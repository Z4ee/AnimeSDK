#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIPROPERTYSELECTOR_METHOD_3_4D13533DD3DAA292_OFFSET UNITYSDK_OFFSET(0x1B9F5780)
#define RPG_GAMECORE_AIPROPERTYSELECTOR_METHOD_3_FEF67153DF55FDFB_OFFSET UNITYSDK_OFFSET(0x1B9F57F0)
#define RPG_GAMECORE_AIPROPERTYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F57D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIPropertySelector_TypeDefinitionIndex = 14987;

	class AIPropertySelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AICompareStrategy PropertyStrategy; // 0x10
		::RPG::GameCore::AbilityProperty Property; // 0x14
		::RPG::GameCore::CompareType CompareType; // 0x18
		::RPG::GameCore::FixPoint CompareValue; // 0x20
		::RPG::GameCore::FixPoint CompareRatio; // 0x28
		::System::Boolean InverseResultFlag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D13533DD3DAA292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIPropertySelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIPropertySelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR_METHOD_3_4D13533DD3DAA292_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEF67153DF55FDFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIPropertySelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIPropertySelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR_METHOD_3_FEF67153DF55FDFB_OFFSET))(a1, a2);
		}
	};
}
