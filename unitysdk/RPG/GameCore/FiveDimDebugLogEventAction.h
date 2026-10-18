#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_4_AE4B9524DCC58901_OFFSET UNITYSDK_OFFSET(0x1D68AC20)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_4_D80DB51BC6DB29B6_OFFSET UNITYSDK_OFFSET(0x1D68AC60)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDebugLogEventAction_TypeDefinitionIndex = 18652;

	class FiveDimDebugLogEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x10
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE4B9524DCC58901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDebugLogEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDebugLogEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_4_AE4B9524DCC58901_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D80DB51BC6DB29B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_4_D80DB51BC6DB29B6_OFFSET))(a1, a2);
		}
	};
}
