#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_99FD824A61E7BC41_OFFSET UNITYSDK_OFFSET(0x1D505490)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_E2B371A97AE74E2A_OFFSET UNITYSDK_OFFSET(0x1D505440)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D505480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMechanismBarVisible_TypeDefinitionIndex = 20286;

	class SetMechanismBarVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Boolean Visible; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2B371A97AE74E2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_E2B371A97AE74E2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99FD824A61E7BC41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_METHOD_3_99FD824A61E7BC41_OFFSET))(a1, a2);
		}
	};
}
