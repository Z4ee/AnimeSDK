#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_5_28C798F065679840_OFFSET UNITYSDK_OFFSET(0x18AB4BB0)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_5_3491AE6EEC951D5E_OFFSET UNITYSDK_OFFSET(0x18ABB1E0)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB4B40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowSideDialogAction_TypeDefinitionIndex = 23707;

	class ShowSideDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* ImagePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3491AE6EEC951D5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowSideDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowSideDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_5_3491AE6EEC951D5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_28C798F065679840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowSideDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowSideDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_METHOD_5_28C798F065679840_OFFSET))(a1, a2);
		}
	};
}
