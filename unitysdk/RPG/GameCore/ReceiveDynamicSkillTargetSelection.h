#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_7B66D7888E4693AC_OFFSET UNITYSDK_OFFSET(0x1B9BB5E0)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_D6067DC21B3AF353_OFFSET UNITYSDK_OFFSET(0x1B9BB620)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BB610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReceiveDynamicSkillTargetSelection_TypeDefinitionIndex = 22020;

	class ReceiveDynamicSkillTargetSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReceive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEmpty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B66D7888E4693AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_7B66D7888E4693AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6067DC21B3AF353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_D6067DC21B3AF353_OFFSET))(a1, a2);
		}
	};
}
