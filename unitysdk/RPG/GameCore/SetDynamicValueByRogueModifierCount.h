#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_9345A10A4C1767B7_OFFSET UNITYSDK_OFFSET(0x1C5F04E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_ACFB775851E8DE6A_OFFSET UNITYSDK_OFFSET(0x1C5F0520)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F0510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueModifierCount_TypeDefinitionIndex = 20991;

	class SetDynamicValueByRogueModifierCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9345A10A4C1767B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_9345A10A4C1767B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACFB775851E8DE6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_ACFB775851E8DE6A_OFFSET))(a1, a2);
		}
	};
}
