#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_C98F0F4138BCC812_OFFSET UNITYSDK_OFFSET(0x171DC5C0)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_E9F4416AD84FC045_OFFSET UNITYSDK_OFFSET(0x171DC520)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171DC580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDelayedSequenceAction_TypeDefinitionIndex = 17156;

	class FiveDimAddDelayedSequenceAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Delay; // 0x10
		::System::String* Name; // 0x18
		::System::Boolean InterruptSameName; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9F4416AD84FC045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_E9F4416AD84FC045_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C98F0F4138BCC812(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_METHOD_3_C98F0F4138BCC812_OFFSET))(a1, a2);
		}
	};
}
