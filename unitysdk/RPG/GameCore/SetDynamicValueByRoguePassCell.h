#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_METHOD_3_4075572153455FB5_OFFSET UNITYSDK_OFFSET(0x18E27100)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_METHOD_3_7E17EE785DD944A5_OFFSET UNITYSDK_OFFSET(0x18E27070)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x18E270D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassCell_TypeDefinitionIndex = 20638;

	class SetDynamicValueByRoguePassCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E17EE785DD944A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_METHOD_3_7E17EE785DD944A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4075572153455FB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_METHOD_3_4075572153455FB5_OFFSET))(a1, a2);
		}
	};
}
