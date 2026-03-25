#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_1DC07F62FD89F39F_OFFSET UNITYSDK_OFFSET(0x174DB980)
#define RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_CF4BE6E321C04B6E_OFFSET UNITYSDK_OFFSET(0x174DB900)
#define RPG_GAMECORE_PLAYERFORCEWALK__CTOR_OFFSET UNITYSDK_OFFSET(0x174DB950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerForceWalk_TypeDefinitionIndex = 18279;

	class PlayerForceWalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceWalk; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF4BE6E321C04B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceWalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceWalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_CF4BE6E321C04B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DC07F62FD89F39F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceWalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_1DC07F62FD89F39F_OFFSET))(a1, a2);
		}
	};
}
