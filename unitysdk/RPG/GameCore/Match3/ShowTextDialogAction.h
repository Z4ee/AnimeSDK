#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_5_27FA6E80198C6FB6_OFFSET UNITYSDK_OFFSET(0x1D264BB0)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_5_94CCC5794815341A_OFFSET UNITYSDK_OFFSET(0x1D264C10)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D264C00)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowTextDialogAction_TypeDefinitionIndex = 24622;

	class ShowTextDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_27FA6E80198C6FB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowTextDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowTextDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_5_27FA6E80198C6FB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_94CCC5794815341A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowTextDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowTextDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_METHOD_5_94CCC5794815341A_OFFSET))(a1, a2);
		}
	};
}
