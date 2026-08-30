#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARTALKUI_METHOD_3_04D8D4F6F66A56D1_OFFSET UNITYSDK_OFFSET(0x1E348B40)
#define RPG_GAMECORE_CLEARTALKUI_METHOD_3_37FB3E4B825A8454_OFFSET UNITYSDK_OFFSET(0x1E348B80)
#define RPG_GAMECORE_CLEARTALKUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E348B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTalkUI_TypeDefinitionIndex = 21662;

	class ClearTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HideControlBtns; // 0x18
		::System::Boolean SuccessWithoutTalk; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04D8D4F6F66A56D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTalkUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTalkUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI_METHOD_3_04D8D4F6F66A56D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37FB3E4B825A8454(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTalkUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI_METHOD_3_37FB3E4B825A8454_OFFSET))(a1, a2);
		}
	};
}
