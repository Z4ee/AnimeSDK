#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_427C26E7A32D0428_OFFSET UNITYSDK_OFFSET(0x18BCD260)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_614BADC2B032BC81_OFFSET UNITYSDK_OFFSET(0x18BCD2E0)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCD2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverridePerformanceEndCrack_TypeDefinitionIndex = 20767;

	class OverridePerformanceEndCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EndWithCrack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_427C26E7A32D0428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndCrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndCrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_427C26E7A32D0428_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_614BADC2B032BC81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_614BADC2B032BC81_OFFSET))(a1, a2);
		}
	};
}
