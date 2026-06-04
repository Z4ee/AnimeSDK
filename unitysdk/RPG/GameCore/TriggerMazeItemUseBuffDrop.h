#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_METHOD_3_7A057EBCBCEA6230_OFFSET UNITYSDK_OFFSET(0x19E17650)
#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_METHOD_3_A6BBCB857474FFD7_OFFSET UNITYSDK_OFFSET(0x19E175E0)
#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E17620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeItemUseBuffDrop_TypeDefinitionIndex = 20539;

	class TriggerMazeItemUseBuffDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6BBCB857474FFD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeItemUseBuffDrop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeItemUseBuffDrop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_METHOD_3_A6BBCB857474FFD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A057EBCBCEA6230(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeItemUseBuffDrop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeItemUseBuffDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_METHOD_3_7A057EBCBCEA6230_OFFSET))(a1, a2);
		}
	};
}
