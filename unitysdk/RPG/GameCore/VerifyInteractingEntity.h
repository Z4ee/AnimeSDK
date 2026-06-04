#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VERIFYINTERACTINGENTITY_METHOD_3_BD178069C3DAAAC0_OFFSET UNITYSDK_OFFSET(0x19E4ACD0)
#define RPG_GAMECORE_VERIFYINTERACTINGENTITY_METHOD_3_CB95EE76AADE8C18_OFFSET UNITYSDK_OFFSET(0x19E4AC50)
#define RPG_GAMECORE_VERIFYINTERACTINGENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VerifyInteractingEntity_TypeDefinitionIndex = 19709;

	class VerifyInteractingEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDialogueTarget; // 0x18
		::System::Boolean IsOwnerEntity; // 0x19
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ConfigID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB95EE76AADE8C18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VerifyInteractingEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VerifyInteractingEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY_METHOD_3_CB95EE76AADE8C18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD178069C3DAAAC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VerifyInteractingEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VerifyInteractingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY_METHOD_3_BD178069C3DAAAC0_OFFSET))(a1, a2);
		}
	};
}
