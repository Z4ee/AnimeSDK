#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_851F70B03540400C_OFFSET UNITYSDK_OFFSET(0x1E0A3290)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_938A7BF332E8ABC7_OFFSET UNITYSDK_OFFSET(0x1E0A32D0)
#define RPG_GAMECORE_SHOWBATTLEEVENTBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A32C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleEventButton_TypeDefinitionIndex = 22685;

	class ShowBattleEventButton : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_851F70B03540400C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventButton*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventButton*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_851F70B03540400C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_938A7BF332E8ABC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTBUTTON_METHOD_3_938A7BF332E8ABC7_OFFSET))(a1, a2);
		}
	};
}
