#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_4DD0D4EAE9B88B7F_OFFSET UNITYSDK_OFFSET(0x1BE47F40)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_739A215F21325642_OFFSET UNITYSDK_OFFSET(0x1BE47E70)
#define RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE47F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSwordTrainingConfirmGiveUpDialog_TypeDefinitionIndex = 20064;

	class ShowSwordTrainingConfirmGiveUpDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_739A215F21325642(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_739A215F21325642_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DD0D4EAE9B88B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwordTrainingConfirmGiveUpDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWORDTRAININGCONFIRMGIVEUPDIALOG_METHOD_3_4DD0D4EAE9B88B7F_OFFSET))(a1, a2);
		}
	};
}
