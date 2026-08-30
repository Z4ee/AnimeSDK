#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_1DC07F62FD89F39F_OFFSET UNITYSDK_OFFSET(0x1D34EA20)
#define RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_5403194CDA2A5F04_OFFSET UNITYSDK_OFFSET(0x1D34E9E0)
#define RPG_GAMECORE_PLAYERFORCEWALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34EA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerForceWalk_TypeDefinitionIndex = 19771;

	class PlayerForceWalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceWalk; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5403194CDA2A5F04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceWalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceWalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_5403194CDA2A5F04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DC07F62FD89F39F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceWalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_METHOD_3_1DC07F62FD89F39F_OFFSET))(a1, a2);
		}
	};
}
