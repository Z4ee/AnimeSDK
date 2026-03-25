#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_E0E6F386D341518A_OFFSET UNITYSDK_OFFSET(0x16F43370)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_FF42F42F7C698ED9_OFFSET UNITYSDK_OFFSET(0x16F433F0)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F433C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetWavingBlockControl_TypeDefinitionIndex = 20424;

	class AdvSetWavingBlockControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* FloorID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0E6F386D341518A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetWavingBlockControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetWavingBlockControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_E0E6F386D341518A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF42F42F7C698ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_METHOD_3_FF42F42F7C698ED9_OFFSET))(a1, a2);
		}
	};
}
