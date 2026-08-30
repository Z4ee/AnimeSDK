#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_02980F27C4BD5B98_OFFSET UNITYSDK_OFFSET(0x1E0E0320)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_37FE5E2B21ED897E_OFFSET UNITYSDK_OFFSET(0x1E0E03A0)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E0370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDelayedSequenceAction_TypeDefinitionIndex = 18482;

	class FiveDimAddDelayedSequenceAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Delay; // 0x10
		::System::String* Name; // 0x18
		::System::Boolean InterruptSameName; // 0x20
		::System::Boolean IgnoreFreezeTimeScale; // 0x21
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02980F27C4BD5B98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_02980F27C4BD5B98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37FE5E2B21ED897E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_37FE5E2B21ED897E_OFFSET))(a1, a2);
		}
	};
}
