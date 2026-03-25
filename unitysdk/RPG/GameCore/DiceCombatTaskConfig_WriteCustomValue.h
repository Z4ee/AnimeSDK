#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_METHOD_3_7C4377F1BD6BE935_OFFSET UNITYSDK_OFFSET(0x17171B20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_METHOD_3_BC9ECCD43B670BA0_OFFSET UNITYSDK_OFFSET(0x1716F410)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1716F3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_TypeDefinitionIndex = 14758;

	class DiceCombatTaskConfig_WriteCustomValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget WriteTarget; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C4377F1BD6BE935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_METHOD_3_7C4377F1BD6BE935_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC9ECCD43B670BA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_METHOD_3_BC9ECCD43B670BA0_OFFSET))(a1, a2);
		}
	};
}
