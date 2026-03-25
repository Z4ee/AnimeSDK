#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM_METHOD_4_474B9A07830832C8_OFFSET UNITYSDK_OFFSET(0x176C3860)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM_METHOD_4_5708F293825F9888_OFFSET UNITYSDK_OFFSET(0x176C38F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C38C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueFormulaNumParam_TypeDefinitionIndex = 19947;

	class SetDynamicValueByRogueFormulaNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_474B9A07830832C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueFormulaNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueFormulaNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM_METHOD_4_474B9A07830832C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5708F293825F9888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueFormulaNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueFormulaNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEFORMULANUMPARAM_METHOD_4_5708F293825F9888_OFFSET))(a1, a2);
		}
	};
}
