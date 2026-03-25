#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_METHOD_3_471D4ACA8A3D9ABD_OFFSET UNITYSDK_OFFSET(0x171C3CD0)
#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_METHOD_3_9320DFB44E1B62AC_OFFSET UNITYSDK_OFFSET(0x171C3D50)
#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x171C3D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleArcherProgressReachLimit_TypeDefinitionIndex = 21531;

	class FateBattleArcherProgressReachLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReachedLimit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_471D4ACA8A3D9ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_METHOD_3_471D4ACA8A3D9ABD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9320DFB44E1B62AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_METHOD_3_9320DFB44E1B62AC_OFFSET))(a1, a2);
		}
	};
}
