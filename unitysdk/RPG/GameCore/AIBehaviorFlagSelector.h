#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_METHOD_3_0FF4BC8DE0259745_OFFSET UNITYSDK_OFFSET(0x185EEFA0)
#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_METHOD_3_49F6FF36F9279FC2_OFFSET UNITYSDK_OFFSET(0x185EEF60)
#define RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x185EEF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIBehaviorFlagSelector_TypeDefinitionIndex = 14764;

	class AIBehaviorFlagSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x10
		::System::Boolean InverseResultFlag; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49F6FF36F9279FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIBehaviorFlagSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIBehaviorFlagSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_METHOD_3_49F6FF36F9279FC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FF4BC8DE0259745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIBehaviorFlagSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIBehaviorFlagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIBEHAVIORFLAGSELECTOR_METHOD_3_0FF4BC8DE0259745_OFFSET))(a1, a2);
		}
	};
}
