#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/ModifierDataType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_METHOD_3_0B4D826A69BEC1BD_OFFSET UNITYSDK_OFFSET(0x1C11BEC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_METHOD_3_457E34C1720C810F_OFFSET UNITYSDK_OFFSET(0x1C11BF20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11BF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_ModifierData_TypeDefinitionIndex = 15461;

	class DiceCombatTaskConfig_WriteCustomValue_ModifierData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x14
		::System::String* Name; // 0x18
		::System::UInt32 ModifierID; // 0x20
		::RPG::GameCore::ModifierDataType DataType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B4D826A69BEC1BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_METHOD_3_0B4D826A69BEC1BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_457E34C1720C810F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERDATA_METHOD_3_457E34C1720C810F_OFFSET))(a1, a2);
		}
	};
}
