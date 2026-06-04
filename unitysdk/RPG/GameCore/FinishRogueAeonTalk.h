#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_14626B99F3DE0749_OFFSET UNITYSDK_OFFSET(0x19722190)
#define RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_8E3A8FC49C30B43D_OFFSET UNITYSDK_OFFSET(0x197222A0)
#define RPG_GAMECORE_FINISHROGUEAEONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19722270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishRogueAeonTalk_TypeDefinitionIndex = 20690;

	class FinishRogueAeonTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14626B99F3DE0749(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishRogueAeonTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishRogueAeonTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_14626B99F3DE0749_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E3A8FC49C30B43D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHROGUEAEONTALK_METHOD_3_8E3A8FC49C30B43D_OFFSET))(a1, a2);
		}
	};
}
