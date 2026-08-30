#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_METHOD_4_0896B864A9E8CC2C_OFFSET UNITYSDK_OFFSET(0x1D4F5C70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_METHOD_4_D1A019357CD0CFA8_OFFSET UNITYSDK_OFFSET(0x1D4F5CC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleCountParam_TypeDefinitionIndex = 21552;

	class SetDynamicValueByRogueMiracleCountParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0896B864A9E8CC2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_METHOD_4_0896B864A9E8CC2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1A019357CD0CFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleCountParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLECOUNTPARAM_METHOD_4_D1A019357CD0CFA8_OFFSET))(a1, a2);
		}
	};
}
