#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION_METHOD_3_3000EC3C49B313FB_OFFSET UNITYSDK_OFFSET(0x1BA8C460)
#define RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION_METHOD_3_522916831F04D9FE_OFFSET UNITYSDK_OFFSET(0x1BA8C520)
#define RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCancelDelayedSequenceAction_TypeDefinitionIndex = 17965;

	class FiveDimCancelDelayedSequenceAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3000EC3C49B313FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCancelDelayedSequenceAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCancelDelayedSequenceAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION_METHOD_3_3000EC3C49B313FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_522916831F04D9FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCancelDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCancelDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCANCELDELAYEDSEQUENCEACTION_METHOD_3_522916831F04D9FE_OFFSET))(a1, a2);
		}
	};
}
