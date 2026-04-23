#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_METHOD_3_194077F48C663574_OFFSET UNITYSDK_OFFSET(0x1876BDE0)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_METHOD_3_2E1D12AB820F3A87_OFFSET UNITYSDK_OFFSET(0x18769FC0)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL__CTOR_OFFSET UNITYSDK_OFFSET(0x18769FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGenCurSectionBubbleCell_TypeDefinitionIndex = 17430;

	class CakeRaceActionGenCurSectionBubbleCell : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Percent; // 0x10
		::System::UInt32 MaxNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_194077F48C663574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_METHOD_3_194077F48C663574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E1D12AB820F3A87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_METHOD_3_2E1D12AB820F3A87_OFFSET))(a1, a2);
		}
	};
}
