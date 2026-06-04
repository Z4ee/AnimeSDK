#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_METHOD_3_B9F7F1E8D15F46AA_OFFSET UNITYSDK_OFFSET(0x1974E340)
#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_METHOD_3_BFB4E5AD05343378_OFFSET UNITYSDK_OFFSET(0x1974E2D0)
#define RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1974E320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPressureSwitchConfig_TypeDefinitionIndex = 17650;

	class FiveDimPressureSwitchConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPressureSwitch; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* PressValues; // 0x20
		::Il2CppArray<::System::Int16>* ReleaseValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::System::Boolean CanRelease; // 0x38
		::System::Boolean SendEventOnInit; // 0x39
		::RPG::GameCore::LittleGameEvent* PressEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* ReleaseEvent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFB4E5AD05343378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPressureSwitchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_METHOD_3_BFB4E5AD05343378_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9F7F1E8D15F46AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPressureSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRESSURESWITCHCONFIG_METHOD_3_B9F7F1E8D15F46AA_OFFSET))(a1, a2);
		}
	};
}
