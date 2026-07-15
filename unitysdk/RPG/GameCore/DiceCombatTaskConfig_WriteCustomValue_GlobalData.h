#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/GlobalDataType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_METHOD_3_399C69546859CD00_OFFSET UNITYSDK_OFFSET(0x1C11BD40)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_METHOD_3_C7A799AF2C424AB9_OFFSET UNITYSDK_OFFSET(0x1C11BCE0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11BD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_GlobalData_TypeDefinitionIndex = 15465;

	class DiceCombatTaskConfig_WriteCustomValue_GlobalData : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::GlobalDataType DataType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7A799AF2C424AB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_METHOD_3_C7A799AF2C424AB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_399C69546859CD00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_GlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_GLOBALDATA_METHOD_3_399C69546859CD00_OFFSET))(a1, a2);
		}
	};
}
