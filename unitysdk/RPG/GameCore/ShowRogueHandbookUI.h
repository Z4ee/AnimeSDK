#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI_METHOD_3_09ED2C8504C2E4DD_OFFSET UNITYSDK_OFFSET(0x1BE45970)
#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI_METHOD_3_146C90A561B4663E_OFFSET UNITYSDK_OFFSET(0x1BE459B0)
#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE459A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueHandbookUI_TypeDefinitionIndex = 21286;

	class ShowRogueHandbookUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Version; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09ED2C8504C2E4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueHandbookUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueHandbookUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI_METHOD_3_09ED2C8504C2E4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_146C90A561B4663E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueHandbookUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueHandbookUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI_METHOD_3_146C90A561B4663E_OFFSET))(a1, a2);
		}
	};
}
