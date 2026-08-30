#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_METHOD_3_6E59DF7484FA5084_OFFSET UNITYSDK_OFFSET(0x1D822E20)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_METHOD_3_94AD829DAD8BD88C_OFFSET UNITYSDK_OFFSET(0x1D823B00)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D822E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_SamePointCount_TypeDefinitionIndex = 15967;

	class DiceCombatDiceSelectorConfig_SamePointCount : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94AD829DAD8BD88C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_METHOD_3_94AD829DAD8BD88C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E59DF7484FA5084(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_METHOD_3_6E59DF7484FA5084_OFFSET))(a1, a2);
		}
	};
}
