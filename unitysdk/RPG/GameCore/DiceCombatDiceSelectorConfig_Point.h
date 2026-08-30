#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_METHOD_3_45EDDBBD81213DF3_OFFSET UNITYSDK_OFFSET(0x1D02BE30)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_METHOD_3_B5CC2BC55299C657_OFFSET UNITYSDK_OFFSET(0x1D02CC10)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02BDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Point_TypeDefinitionIndex = 15966;

	class DiceCombatDiceSelectorConfig_Point : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x18
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5CC2BC55299C657(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_METHOD_3_B5CC2BC55299C657_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45EDDBBD81213DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Point*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_POINT_METHOD_3_45EDDBBD81213DF3_OFFSET))(a1, a2);
		}
	};
}
