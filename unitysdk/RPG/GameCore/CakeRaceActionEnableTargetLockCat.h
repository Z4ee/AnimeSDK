#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_8607F494FE2FBD57_OFFSET UNITYSDK_OFFSET(0x1B2CB2D0)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_B6A0662F6CC0AD23_OFFSET UNITYSDK_OFFSET(0x1B2CB330)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CB320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionEnableTargetLockCat_TypeDefinitionIndex = 17622;

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

		static ::System::Void Method_3_8607F494FE2FBD57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_8607F494FE2FBD57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6A0662F6CC0AD23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_METHOD_3_B6A0662F6CC0AD23_OFFSET))(a1, a2);
		}
	};
}
