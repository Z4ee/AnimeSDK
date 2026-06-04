#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_7896F3262019F138_OFFSET UNITYSDK_OFFSET(0x19C737B0)
#define RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_9DF8B4D393C335E0_OFFSET UNITYSDK_OFFSET(0x19C73730)
#define RPG_GAMECORE_SHOWACTIVITYPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C73780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActivityPage_TypeDefinitionIndex = 20483;

	class ShowActivityPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* PanelID; // 0x18
		::System::Boolean WaitForExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DF8B4D393C335E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActivityPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActivityPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_9DF8B4D393C335E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7896F3262019F138(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActivityPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_7896F3262019F138_OFFSET))(a1, a2);
		}
	};
}
