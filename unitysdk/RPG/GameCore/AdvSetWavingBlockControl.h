#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_D9040C7C7022E574_OFFSET UNITYSDK_OFFSET(0x1CBA2EE0)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_FF42F42F7C698ED9_OFFSET UNITYSDK_OFFSET(0x1CBA2F20)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetWavingBlockControl_TypeDefinitionIndex = 21985;

	class AdvSetWavingBlockControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* FloorID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9040C7C7022E574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetWavingBlockControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetWavingBlockControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_D9040C7C7022E574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF42F42F7C698ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_FF42F42F7C698ED9_OFFSET))(a1, a2);
		}
	};
}
