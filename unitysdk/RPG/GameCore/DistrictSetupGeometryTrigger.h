#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_80E7581C65B3E43B_OFFSET UNITYSDK_OFFSET(0x188813A0)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_D1708A962600ACEA_OFFSET UNITYSDK_OFFSET(0x18881420)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x188813F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictSetupGeometryTrigger_TypeDefinitionIndex = 20825;

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

		static ::System::Void Method_3_80E7581C65B3E43B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_80E7581C65B3E43B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1708A962600ACEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_D1708A962600ACEA_OFFSET))(a1, a2);
		}
	};
}
