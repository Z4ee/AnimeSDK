#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_METHOD_3_4A5CC60684E4F871_OFFSET UNITYSDK_OFFSET(0x17198E00)
#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_METHOD_3_C1698F7C2925BD98_OFFSET UNITYSDK_OFFSET(0x17198E80)
#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17198E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableLocalPlayerMoveIgnoreMonster_TypeDefinitionIndex = 18474;

	class EnableLocalPlayerMoveIgnoreMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A5CC60684E4F871(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_METHOD_3_4A5CC60684E4F871_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1698F7C2925BD98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_METHOD_3_C1698F7C2925BD98_OFFSET))(a1, a2);
		}
	};
}
