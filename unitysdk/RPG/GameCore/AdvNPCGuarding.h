#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCGUARDING_METHOD_3_2B038902D5C32559_OFFSET UNITYSDK_OFFSET(0x16F34530)
#define RPG_GAMECORE_ADVNPCGUARDING_METHOD_3_64925654FB707612_OFFSET UNITYSDK_OFFSET(0x16F344A0)
#define RPG_GAMECORE_ADVNPCGUARDING__CTOR_OFFSET UNITYSDK_OFFSET(0x16F34500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCGuarding_TypeDefinitionIndex = 18253;

	class AdvNPCGuarding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableSearch; // 0x18
		::System::Single SearchOffset; // 0x1C
		::RPG::GameCore::TaskConfig* OnGuardStart; // 0x20
		::RPG::GameCore::TaskConfig* OnGuardEnd; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_64925654FB707612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCGuarding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCGuarding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING_METHOD_3_64925654FB707612_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B038902D5C32559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING_METHOD_3_2B038902D5C32559_OFFSET))(a1, a2);
		}
	};
}
