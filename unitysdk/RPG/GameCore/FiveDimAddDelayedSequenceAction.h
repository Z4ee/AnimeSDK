#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_4_43712EF80D5BAD79_OFFSET UNITYSDK_OFFSET(0x1D6802C0)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_4_59FA26D221B40F3B_OFFSET UNITYSDK_OFFSET(0x1D680240)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D680290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDelayedSequenceAction_TypeDefinitionIndex = 18691;

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

		static ::System::Void Method_4_59FA26D221B40F3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_4_59FA26D221B40F3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43712EF80D5BAD79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_4_43712EF80D5BAD79_OFFSET))(a1, a2);
		}
	};
}
