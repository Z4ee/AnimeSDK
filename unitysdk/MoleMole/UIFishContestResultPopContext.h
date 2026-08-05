#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2A154C6D4517B879;
namespace System { class Action; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D624A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestResultPopContext_TypeDefinitionIndex = 73768;

	class UIFishContestResultPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::Class_1_2A154C6D4517B879* FishData; // 0x30
		::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* RewardItemMap; // 0x38
		::System::UInt32 RewardTypeMask; // 0x40
		::System::Boolean HideNew; // 0x44
		::System::Boolean ForceBg; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
