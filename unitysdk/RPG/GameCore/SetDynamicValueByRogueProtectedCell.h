#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_368B11B33D4B6433_OFFSET UNITYSDK_OFFSET(0x176C4000)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_A77A660D2A69FA3C_OFFSET UNITYSDK_OFFSET(0x176C4070)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x176C4040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueProtectedCell_TypeDefinitionIndex = 19954;

	class SetDynamicValueByRogueProtectedCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_368B11B33D4B6433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_368B11B33D4B6433_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A77A660D2A69FA3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_A77A660D2A69FA3C_OFFSET))(a1, a2);
		}
	};
}
