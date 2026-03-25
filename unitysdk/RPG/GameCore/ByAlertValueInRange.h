#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_661BCDFF6B4561DD_OFFSET UNITYSDK_OFFSET(0x16FF9390)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_F4F631AD510D0F8D_OFFSET UNITYSDK_OFFSET(0x16FF9460)
#define RPG_GAMECORE_BYALERTVALUEINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF9410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAlertValueInRange_TypeDefinitionIndex = 18309;

	class ByAlertValueInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single AlertValueMin; // 0x28
		::System::Single AlertValueMax; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_661BCDFF6B4561DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_661BCDFF6B4561DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4F631AD510D0F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_F4F631AD510D0F8D_OFFSET))(a1, a2);
		}
	};
}
