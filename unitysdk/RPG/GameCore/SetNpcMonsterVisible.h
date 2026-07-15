#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETNPCMONSTERVISIBLE_METHOD_3_77E36B115686454A_OFFSET UNITYSDK_OFFSET(0x1C6047A0)
#define RPG_GAMECORE_SETNPCMONSTERVISIBLE_METHOD_3_EF943BE4BEFF18F1_OFFSET UNITYSDK_OFFSET(0x1C6047E0)
#define RPG_GAMECORE_SETNPCMONSTERVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6047D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcMonsterVisible_TypeDefinitionIndex = 21262;

	class SetNpcMonsterVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77E36B115686454A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcMonsterVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcMonsterVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE_METHOD_3_77E36B115686454A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF943BE4BEFF18F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE_METHOD_3_EF943BE4BEFF18F1_OFFSET))(a1, a2);
		}
	};
}
