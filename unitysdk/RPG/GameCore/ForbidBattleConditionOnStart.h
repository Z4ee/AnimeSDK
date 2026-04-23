#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_052DD92380D71B57_OFFSET UNITYSDK_OFFSET(0x189285F0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_06428CB6D889E943_OFFSET UNITYSDK_OFFSET(0x189284E0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x189285C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForbidBattleConditionOnStart_TypeDefinitionIndex = 22321;

	class ForbidBattleConditionOnStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06428CB6D889E943(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForbidBattleConditionOnStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForbidBattleConditionOnStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_06428CB6D889E943_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_052DD92380D71B57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_METHOD_3_052DD92380D71B57_OFFSET))(a1, a2);
		}
	};
}
