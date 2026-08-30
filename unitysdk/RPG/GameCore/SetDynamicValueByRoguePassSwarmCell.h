#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_METHOD_3_8BCDA584360CF56C_OFFSET UNITYSDK_OFFSET(0x1D4F5F80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_METHOD_3_90340126E426FA39_OFFSET UNITYSDK_OFFSET(0x1D4F5FC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassSwarmCell_TypeDefinitionIndex = 21543;

	class SetDynamicValueByRoguePassSwarmCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BCDA584360CF56C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_METHOD_3_8BCDA584360CF56C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90340126E426FA39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_METHOD_3_90340126E426FA39_OFFSET))(a1, a2);
		}
	};
}
