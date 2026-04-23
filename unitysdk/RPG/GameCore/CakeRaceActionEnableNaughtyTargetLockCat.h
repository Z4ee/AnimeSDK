#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_METHOD_3_3563DFA514B724C5_OFFSET UNITYSDK_OFFSET(0x18769B00)
#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_METHOD_3_A8EA9A2A30CF379F_OFFSET UNITYSDK_OFFSET(0x1876BCB0)
#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18769AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionEnableNaughtyTargetLockCat_TypeDefinitionIndex = 17454;

	class CakeRaceActionEnableNaughtyTargetLockCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 PathFindRange; // 0x10
		::System::UInt32 UnlockCatExcludeCatCd; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8EA9A2A30CF379F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_METHOD_3_A8EA9A2A30CF379F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3563DFA514B724C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_METHOD_3_3563DFA514B724C5_OFFSET))(a1, a2);
		}
	};
}
