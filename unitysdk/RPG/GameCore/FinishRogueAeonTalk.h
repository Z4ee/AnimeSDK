#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_8E3A8FC49C30B43D_OFFSET UNITYSDK_OFFSET(0x1D09BC90)
#define RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_E6CF86EE2BAADD80_OFFSET UNITYSDK_OFFSET(0x1D09BBC0)
#define RPG_GAMECORE_FINISHROGUEAEONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishRogueAeonTalk_TypeDefinitionIndex = 21663;

	class FinishRogueAeonTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6CF86EE2BAADD80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishRogueAeonTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishRogueAeonTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_E6CF86EE2BAADD80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E3A8FC49C30B43D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_8E3A8FC49C30B43D_OFFSET))(a1, a2);
		}
	};
}
