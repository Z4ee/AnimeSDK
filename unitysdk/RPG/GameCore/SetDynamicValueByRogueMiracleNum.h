#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_CCF03400B64E168A_OFFSET UNITYSDK_OFFSET(0x18E26DB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_EF02714FD43145B5_OFFSET UNITYSDK_OFFSET(0x18E26E20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleNum_TypeDefinitionIndex = 20619;

	class SetDynamicValueByRogueMiracleNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCF03400B64E168A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_CCF03400B64E168A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF02714FD43145B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLENUM_METHOD_3_EF02714FD43145B5_OFFSET))(a1, a2);
		}
	};
}
