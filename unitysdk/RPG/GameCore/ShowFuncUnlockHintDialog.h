#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_METHOD_3_273F6D7E08EAD58F_OFFSET UNITYSDK_OFFSET(0x1D093520)
#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_METHOD_3_8389A5C24C0A73B4_OFFSET UNITYSDK_OFFSET(0x1D0934D0)
#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D093510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFuncUnlockHintDialog_TypeDefinitionIndex = 24010;

	class ShowFuncUnlockHintDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FuncID; // 0x18
		::System::Boolean WaitForExit; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8389A5C24C0A73B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncUnlockHintDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_METHOD_3_8389A5C24C0A73B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_273F6D7E08EAD58F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncUnlockHintDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_METHOD_3_273F6D7E08EAD58F_OFFSET))(a1, a2);
		}
	};
}
