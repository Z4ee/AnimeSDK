#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_3CDA11848B3CBA68_OFFSET UNITYSDK_OFFSET(0x1D4F5CD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_EF02714FD43145B5_OFFSET UNITYSDK_OFFSET(0x1D4F5D10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleNum_TypeDefinitionIndex = 21525;

	class SetDynamicValueByRogueMiracleNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CDA11848B3CBA68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_3CDA11848B3CBA68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF02714FD43145B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_EF02714FD43145B5_OFFSET))(a1, a2);
		}
	};
}
