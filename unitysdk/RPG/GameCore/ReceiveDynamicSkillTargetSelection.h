#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_B3CFA5D43F18F507_OFFSET UNITYSDK_OFFSET(0x18C8F290)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_CDFD790CFD92C689_OFFSET UNITYSDK_OFFSET(0x18C8F310)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8F2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReceiveDynamicSkillTargetSelection_TypeDefinitionIndex = 21755;

	class ReceiveDynamicSkillTargetSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReceive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEmpty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3CFA5D43F18F507(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_B3CFA5D43F18F507_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDFD790CFD92C689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_METHOD_3_CDFD790CFD92C689_OFFSET))(a1, a2);
		}
	};
}
