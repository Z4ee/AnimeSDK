#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_821710C58937F70C_OFFSET UNITYSDK_OFFSET(0x1D03C300)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_C39EEB8164439059_OFFSET UNITYSDK_OFFSET(0x1D03C2C0)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03C2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictSetupGeometryTrigger_TypeDefinitionIndex = 21724;

	class DistrictSetupGeometryTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x20
		::System::Single TriggerUpdateInterval; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C39EEB8164439059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_C39EEB8164439059_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_821710C58937F70C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_821710C58937F70C_OFFSET))(a1, a2);
		}
	};
}
