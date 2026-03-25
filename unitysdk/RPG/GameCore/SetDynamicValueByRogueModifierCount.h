#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_5A5AA031A54FE7C5_OFFSET UNITYSDK_OFFSET(0x176C3CC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_ACFB775851E8DE6A_OFFSET UNITYSDK_OFFSET(0x176C3D30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x176C3D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueModifierCount_TypeDefinitionIndex = 19962;

	class SetDynamicValueByRogueModifierCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A5AA031A54FE7C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_5A5AA031A54FE7C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACFB775851E8DE6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_METHOD_3_ACFB775851E8DE6A_OFFSET))(a1, a2);
		}
	};
}
