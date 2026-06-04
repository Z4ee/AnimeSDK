#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_5_3C4D82EBE65ED1A9_OFFSET UNITYSDK_OFFSET(0x198E5090)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_5_75817511A69FF8FE_OFFSET UNITYSDK_OFFSET(0x198EBB00)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E5020)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowPopupDialogAction_TypeDefinitionIndex = 23542;

	class ShowPopupDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 PopupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_75817511A69FF8FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowPopupDialogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_5_75817511A69FF8FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3C4D82EBE65ED1A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowPopupDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_METHOD_5_3C4D82EBE65ED1A9_OFFSET))(a1, a2);
		}
	};
}
