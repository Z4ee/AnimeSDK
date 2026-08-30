#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_6598FE21E0756C17_OFFSET UNITYSDK_OFFSET(0x1D28DA90)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_D9C80BF7D247935C_OFFSET UNITYSDK_OFFSET(0x1D28DA40)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnterSafeUI_TypeDefinitionIndex = 21832;

	class TriggerEnterSafeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnterSafe; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9C80BF7D247935C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnterSafeUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnterSafeUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_D9C80BF7D247935C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6598FE21E0756C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_6598FE21E0756C17_OFFSET))(a1, a2);
		}
	};
}
