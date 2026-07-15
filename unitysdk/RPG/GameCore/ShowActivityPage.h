#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_1ADD8FAEB9333027_OFFSET UNITYSDK_OFFSET(0x1BE389C0)
#define RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_7896F3262019F138_OFFSET UNITYSDK_OFFSET(0x1BE38A00)
#define RPG_GAMECORE_SHOWACTIVITYPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE389F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActivityPage_TypeDefinitionIndex = 20898;

	class ShowActivityPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* PanelID; // 0x18
		::System::Boolean WaitForExit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1ADD8FAEB9333027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActivityPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActivityPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_1ADD8FAEB9333027_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7896F3262019F138(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActivityPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_METHOD_3_7896F3262019F138_OFFSET))(a1, a2);
		}
	};
}
