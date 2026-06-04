#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceAoeConfig; }

#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_METHOD_3_CFBBF0E5D06805FD_OFFSET UNITYSDK_OFFSET(0x195E6BE0)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_METHOD_3_F27966EF4AE4A2C2_OFFSET UNITYSDK_OFFSET(0x195E8430)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS__CTOR_OFFSET UNITYSDK_OFFSET(0x195E6BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSpawnAoeOnCurSectionRows_TypeDefinitionIndex = 17455;

	class CakeRaceActionSpawnAoeOnCurSectionRows : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Rows; // 0x10
		::RPG::GameCore::CakeRaceAoeConfig* AoeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F27966EF4AE4A2C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_METHOD_3_F27966EF4AE4A2C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFBBF0E5D06805FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_METHOD_3_CFBBF0E5D06805FD_OFFSET))(a1, a2);
		}
	};
}
