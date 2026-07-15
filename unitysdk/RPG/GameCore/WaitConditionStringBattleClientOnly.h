#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitConditionString.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_METHOD_4_81DEE13FFFCBF643_OFFSET UNITYSDK_OFFSET(0x1B8A1E80)
#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_METHOD_4_CB8A9BEA08F80DF0_OFFSET UNITYSDK_OFFSET(0x1B8A1D00)
#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A1CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitConditionStringBattleClientOnly_TypeDefinitionIndex = 23212;

	class WaitConditionStringBattleClientOnly : public ::RPG::GameCore::WaitConditionString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_81DEE13FFFCBF643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitConditionStringBattleClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitConditionStringBattleClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_METHOD_4_81DEE13FFFCBF643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB8A9BEA08F80DF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitConditionStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitConditionStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_METHOD_4_CB8A9BEA08F80DF0_OFFSET))(a1, a2);
		}
	};
}
