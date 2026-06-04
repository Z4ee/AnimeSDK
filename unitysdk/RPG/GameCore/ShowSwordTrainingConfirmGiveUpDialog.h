#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_1EF96201D1856C0B_OFFSET UNITYSDK_OFFSET(0x19C843E0)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_4DD0D4EAE9B88B7F_OFFSET UNITYSDK_OFFSET(0x19C844F0)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C844C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSwordTrainingConfirmGiveUpDialog_TypeDefinitionIndex = 19705;

	class ShowSwordTrainingConfirmGiveUpDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1EF96201D1856C0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_1EF96201D1856C0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DD0D4EAE9B88B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_4DD0D4EAE9B88B7F_OFFSET))(a1, a2);
		}
	};
}
