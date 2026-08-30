#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_052DD92380D71B57_OFFSET UNITYSDK_OFFSET(0x1DCB04C0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_AE7B1C60F67DCBFA_OFFSET UNITYSDK_OFFSET(0x1DCB03F0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB04B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForbidBattleConditionOnStart_TypeDefinitionIndex = 23085;

	class ForbidBattleConditionOnStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE7B1C60F67DCBFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForbidBattleConditionOnStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForbidBattleConditionOnStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_AE7B1C60F67DCBFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_052DD92380D71B57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_052DD92380D71B57_OFFSET))(a1, a2);
		}
	};
}
