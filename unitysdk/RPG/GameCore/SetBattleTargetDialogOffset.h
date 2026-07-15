#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_50DD636B66936149_OFFSET UNITYSDK_OFFSET(0x1C2D53B0)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_FE2DE4C65872F9D2_OFFSET UNITYSDK_OFFSET(0x1C2D53F0)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D53E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetDialogOffset_TypeDefinitionIndex = 22414;

	class SetBattleTargetDialogOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector2 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50DD636B66936149(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetDialogOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetDialogOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_50DD636B66936149_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE2DE4C65872F9D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_METHOD_3_FE2DE4C65872F9D2_OFFSET))(a1, a2);
		}
	};
}
