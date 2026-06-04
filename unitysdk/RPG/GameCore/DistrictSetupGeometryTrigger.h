#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_628E1252B5BD9025_OFFSET UNITYSDK_OFFSET(0x196BE120)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_821710C58937F70C_OFFSET UNITYSDK_OFFSET(0x196BE1A0)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x196BE170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictSetupGeometryTrigger_TypeDefinitionIndex = 20749;

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

		static ::System::Void Method_3_628E1252B5BD9025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_628E1252B5BD9025_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_821710C58937F70C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_METHOD_3_821710C58937F70C_OFFSET))(a1, a2);
		}
	};
}
