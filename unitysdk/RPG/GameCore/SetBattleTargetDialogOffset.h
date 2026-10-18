#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_7FECAD49893FC2F3_OFFSET UNITYSDK_OFFSET(0x1DA979D0)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_F222F8E0590030D8_OFFSET UNITYSDK_OFFSET(0x1DA97A10)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA97A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetDialogOffset_TypeDefinitionIndex = 23248;

	class SetBattleTargetDialogOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector2 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FECAD49893FC2F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetDialogOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetDialogOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_7FECAD49893FC2F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F222F8E0590030D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_F222F8E0590030D8_OFFSET))(a1, a2);
		}
	};
}
