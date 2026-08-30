#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_227035012D28EFD0_OFFSET UNITYSDK_OFFSET(0x1D4F5F20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_840CF9FB80E8DBDD_OFFSET UNITYSDK_OFFSET(0x1D4F5EE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassEmptyCell_TypeDefinitionIndex = 21540;

	class SetDynamicValueByRoguePassEmptyCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_840CF9FB80E8DBDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_840CF9FB80E8DBDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_227035012D28EFD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_METHOD_3_227035012D28EFD0_OFFSET))(a1, a2);
		}
	};
}
