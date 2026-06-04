#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_99FD824A61E7BC41_OFFSET UNITYSDK_OFFSET(0x19C554D0)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_F71BA915C3B8323F_OFFSET UNITYSDK_OFFSET(0x19C55450)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C554A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMechanismBarVisible_TypeDefinitionIndex = 19384;

	class SetMechanismBarVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Boolean Visible; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F71BA915C3B8323F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_F71BA915C3B8323F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99FD824A61E7BC41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_99FD824A61E7BC41_OFFSET))(a1, a2);
		}
	};
}
