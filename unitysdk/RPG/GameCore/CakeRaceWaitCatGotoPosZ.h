#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_METHOD_3_80875BED6952D463_OFFSET UNITYSDK_OFFSET(0x1D105270)
#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_METHOD_3_E06AEC4BDDA9924A_OFFSET UNITYSDK_OFFSET(0x1D105230)
#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D105260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitCatGotoPosZ_TypeDefinitionIndex = 24022;

	class CakeRaceWaitCatGotoPosZ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CatConfigID; // 0x18
		::System::Int32 PositionZ; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E06AEC4BDDA9924A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_METHOD_3_E06AEC4BDDA9924A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80875BED6952D463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_METHOD_3_80875BED6952D463_OFFSET))(a1, a2);
		}
	};
}
