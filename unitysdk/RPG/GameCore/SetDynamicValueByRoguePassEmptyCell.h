#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_227035012D28EFD0_OFFSET UNITYSDK_OFFSET(0x176C3EF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_AD9302DF138844F7_OFFSET UNITYSDK_OFFSET(0x176C3E80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x176C3EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassEmptyCell_TypeDefinitionIndex = 19953;

	class SetDynamicValueByRoguePassEmptyCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD9302DF138844F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_AD9302DF138844F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_227035012D28EFD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_227035012D28EFD0_OFFSET))(a1, a2);
		}
	};
}
