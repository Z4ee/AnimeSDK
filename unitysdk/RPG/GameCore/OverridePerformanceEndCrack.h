#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_263D069065B91C9A_OFFSET UNITYSDK_OFFSET(0x1BB08830)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_614BADC2B032BC81_OFFSET UNITYSDK_OFFSET(0x1BB08870)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB08860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverridePerformanceEndCrack_TypeDefinitionIndex = 21110;

	class OverridePerformanceEndCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EndWithCrack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_263D069065B91C9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndCrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndCrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_263D069065B91C9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_614BADC2B032BC81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_METHOD_3_614BADC2B032BC81_OFFSET))(a1, a2);
		}
	};
}
