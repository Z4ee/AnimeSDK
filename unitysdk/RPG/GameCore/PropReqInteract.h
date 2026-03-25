#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPREQINTERACT_METHOD_3_25E22B3538397437_OFFSET UNITYSDK_OFFSET(0x175235B0)
#define RPG_GAMECORE_PROPREQINTERACT_METHOD_3_8419001AFA96203C_OFFSET UNITYSDK_OFFSET(0x17523700)
#define RPG_GAMECORE_PROPREQINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x17523670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropReqInteract_TypeDefinitionIndex = 20522;

	class PropReqInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean TargetIsTalkTrigger; // 0x20
		::RPG::GameCore::DynamicFloat* InteractID; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUICancel; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCheckItemFail; // 0x38
		::System::Boolean EnableAdvanceInteract; // 0x40
		::System::Boolean ForceIgnoreCMDBlock; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25E22B3538397437(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReqInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReqInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT_METHOD_3_25E22B3538397437_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8419001AFA96203C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReqInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT_METHOD_3_8419001AFA96203C_OFFSET))(a1, a2);
		}
	};
}
