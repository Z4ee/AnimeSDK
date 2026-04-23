#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_7F5FD3A854CB1E16_OFFSET UNITYSDK_OFFSET(0x18E58CF0)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_938A7BF332E8ABC7_OFFSET UNITYSDK_OFFSET(0x18E58D70)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x18E58D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleEventButton_TypeDefinitionIndex = 21862;

	class ShowBattleEventButton : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F5FD3A854CB1E16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventButton*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventButton*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_7F5FD3A854CB1E16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_938A7BF332E8ABC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_938A7BF332E8ABC7_OFFSET))(a1, a2);
		}
	};
}
