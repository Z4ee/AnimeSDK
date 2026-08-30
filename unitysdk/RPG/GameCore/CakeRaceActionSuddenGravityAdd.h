#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_METHOD_3_8F0B20440AD9858C_OFFSET UNITYSDK_OFFSET(0x1CF709A0)
#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_METHOD_3_EC011528FBB96521_OFFSET UNITYSDK_OFFSET(0x1CF70A20)
#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF70A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSuddenGravityAdd_TypeDefinitionIndex = 18147;

	class CakeRaceActionSuddenGravityAdd : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F0B20440AD9858C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_METHOD_3_8F0B20440AD9858C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC011528FBB96521(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_METHOD_3_EC011528FBB96521_OFFSET))(a1, a2);
		}
	};
}
