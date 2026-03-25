#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_791D571422EF14A1_OFFSET UNITYSDK_OFFSET(0x170465C0)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_B6A0662F6CC0AD23_OFFSET UNITYSDK_OFFSET(0x17044500)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x170444E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionEnableTargetLockCat_TypeDefinitionIndex = 16852;

	class CakeRaceActionEnableTargetLockCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 PreferCat; // 0x10
		::System::UInt32 LockRange; // 0x14
		::System::UInt32 LostExtendRange; // 0x18
		::System::UInt32 LockYDistance; // 0x1C
		::System::UInt32 LostYExtendDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_791D571422EF14A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_791D571422EF14A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6A0662F6CC0AD23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_B6A0662F6CC0AD23_OFFSET))(a1, a2);
		}
	};
}
