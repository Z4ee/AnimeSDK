#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_METHOD_3_0CEA6486AE77E83C_OFFSET UNITYSDK_OFFSET(0x19420940)
#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_METHOD_3_A94FA31A45A59D40_OFFSET UNITYSDK_OFFSET(0x19420B10)
#define RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19420A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDistrictSetupTrigger_TypeDefinitionIndex = 20024;

	class AdvDistrictSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* DistrictID; // 0x20
		::System::Boolean DisableAfterTrigger; // 0x28
		::System::Single TickInterval; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x38
		::System::Boolean IsOverrideValidGuestConfig; // 0x40
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CEA6486AE77E83C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDistrictSetupTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDistrictSetupTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_METHOD_3_0CEA6486AE77E83C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A94FA31A45A59D40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDistrictSetupTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDistrictSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTSETUPTRIGGER_METHOD_3_A94FA31A45A59D40_OFFSET))(a1, a2);
		}
	};
}
