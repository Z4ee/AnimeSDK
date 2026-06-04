#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDELEVELSTAGE_METHOD_3_54C146DB28FF9C01_OFFSET UNITYSDK_OFFSET(0x198311B0)
#define RPG_GAMECORE_HIDELEVELSTAGE_METHOD_3_AA46E2326F7620CC_OFFSET UNITYSDK_OFFSET(0x19831250)
#define RPG_GAMECORE_HIDELEVELSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19831210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideLevelStage_TypeDefinitionIndex = 21279;

	class HideLevelStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Single Duration; // 0x1C
		::System::Boolean HideFieldEffect; // 0x20
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x24
		::System::Boolean HiendExcluded; // 0x28
		::System::Boolean DisableLoopTowerShake; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54C146DB28FF9C01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideLevelStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideLevelStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE_METHOD_3_54C146DB28FF9C01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA46E2326F7620CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideLevelStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideLevelStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDELEVELSTAGE_METHOD_3_AA46E2326F7620CC_OFFSET))(a1, a2);
		}
	};
}
