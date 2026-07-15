#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/EntityDataType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_METHOD_3_49AF7FD55D0AF762_OFFSET UNITYSDK_OFFSET(0x1C11BAB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_METHOD_3_76A2F268F79DD662_OFFSET UNITYSDK_OFFSET(0x1C11BB10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_EntityData_TypeDefinitionIndex = 15463;

	class DiceCombatTaskConfig_WriteCustomValue_EntityData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x14
		::System::String* Name; // 0x18
		::RPG::GameCore::EntityDataType DataType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49AF7FD55D0AF762(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_METHOD_3_49AF7FD55D0AF762_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76A2F268F79DD662(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_ENTITYDATA_METHOD_3_76A2F268F79DD662_OFFSET))(a1, a2);
		}
	};
}
