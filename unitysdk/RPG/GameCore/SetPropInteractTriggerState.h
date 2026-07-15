#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_METHOD_3_CD527B8E330BAF79_OFFSET UNITYSDK_OFFSET(0x1C606010)
#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_METHOD_3_D715CA6CAF98FB04_OFFSET UNITYSDK_OFFSET(0x1C606050)
#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C606040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropInteractTriggerState_TypeDefinitionIndex = 19601;

	class SetPropInteractTriggerState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::System::String* UniqueName; // 0x28
		::System::String* ColliderRelativePath; // 0x30
		::System::Boolean DisableAfterTriggered; // 0x38
		::System::Boolean ForceInteractInDanger; // 0x39
		::System::Boolean ConsiderAngleLimit; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD527B8E330BAF79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractTriggerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractTriggerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_METHOD_3_CD527B8E330BAF79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D715CA6CAF98FB04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractTriggerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractTriggerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_METHOD_3_D715CA6CAF98FB04_OFFSET))(a1, a2);
		}
	};
}
