#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFTRIGGERSHOWUI_METHOD_3_957CF080C32C8412_OFFSET UNITYSDK_OFFSET(0x17192660)
#define RPG_GAMECORE_ELFTRIGGERSHOWUI_METHOD_3_9871D9225D0BE6A3_OFFSET UNITYSDK_OFFSET(0x171926E0)
#define RPG_GAMECORE_ELFTRIGGERSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x171926B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfTriggerShowUI_TypeDefinitionIndex = 19905;

	class ElfTriggerShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::UInt32 RequireFinishSubMission; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_957CF080C32C8412(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfTriggerShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfTriggerShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI_METHOD_3_957CF080C32C8412_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9871D9225D0BE6A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfTriggerShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfTriggerShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTRIGGERSHOWUI_METHOD_3_9871D9225D0BE6A3_OFFSET))(a1, a2);
		}
	};
}
