#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_METHOD_3_BD25801E0B47AC22_OFFSET UNITYSDK_OFFSET(0x1E0E81A0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_METHOD_3_FCEE8FCE3486550F_OFFSET UNITYSDK_OFFSET(0x1E0E8200)
#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E81E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCrystalConfig_TypeDefinitionIndex = 18385;

	class FiveDimCrystalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCrystal; // 0x10
		::System::String* AnimParameterName; // 0x18
		::System::Int32 MaxHp; // 0x20
		::System::Int32 CurHp; // 0x24
		::RPG::GameCore::FiveDimTriggerShape* DamageTriggerShape; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* RecoverTriggerShape; // 0x30
		::System::Boolean SendEventOnInit; // 0x38
		::RPG::GameCore::LittleGameEvent* NormalEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* BrokenEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* DieEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* FreezeEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD25801E0B47AC22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_METHOD_3_BD25801E0B47AC22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCEE8FCE3486550F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_METHOD_3_FCEE8FCE3486550F_OFFSET))(a1, a2);
		}
	};
}
