#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_METHOD_3_2E22473C0EF98D12_OFFSET UNITYSDK_OFFSET(0x1CF6EF20)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_METHOD_3_F73F9EFDE1373517_OFFSET UNITYSDK_OFFSET(0x1CF6EE70)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6EF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGenCurSectionWubbaboo_TypeDefinitionIndex = 18125;

	class CakeRaceActionGenCurSectionWubbaboo : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F73F9EFDE1373517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_METHOD_3_F73F9EFDE1373517_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E22473C0EF98D12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_METHOD_3_2E22473C0EF98D12_OFFSET))(a1, a2);
		}
	};
}
