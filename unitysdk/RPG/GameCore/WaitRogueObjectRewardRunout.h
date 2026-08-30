#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_METHOD_3_91B878A9CD5957AD_OFFSET UNITYSDK_OFFSET(0x1D6AADF0)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_METHOD_3_D04C7FF78EBB1229_OFFSET UNITYSDK_OFFSET(0x1D6AADA0)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AADE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueObjectRewardRunout_TypeDefinitionIndex = 20254;

	class WaitRogueObjectRewardRunout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D04C7FF78EBB1229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueObjectRewardRunout*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueObjectRewardRunout*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_METHOD_3_D04C7FF78EBB1229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91B878A9CD5957AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueObjectRewardRunout* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueObjectRewardRunout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_METHOD_3_91B878A9CD5957AD_OFFSET))(a1, a2);
		}
	};
}
