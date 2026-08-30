#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_16C3B79778D08C09_OFFSET UNITYSDK_OFFSET(0x1D4F5FD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_A77A660D2A69FA3C_OFFSET UNITYSDK_OFFSET(0x1D4F6010)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F6000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueProtectedCell_TypeDefinitionIndex = 21541;

	class SetDynamicValueByRogueProtectedCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16C3B79778D08C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_16C3B79778D08C09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A77A660D2A69FA3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_METHOD_3_A77A660D2A69FA3C_OFFSET))(a1, a2);
		}
	};
}
