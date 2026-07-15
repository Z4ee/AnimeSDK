#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_835CDE1AFB35447F_OFFSET UNITYSDK_OFFSET(0x1BA9B920)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_E381C3F34DA8966C_OFFSET UNITYSDK_OFFSET(0x1BA9B960)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9B950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimInteractEmitterConfig_TypeDefinitionIndex = 17827;

	class FiveDimInteractEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsInteractEmitter; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* InteractButtonConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_835CDE1AFB35447F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimInteractEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_835CDE1AFB35447F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E381C3F34DA8966C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimInteractEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_E381C3F34DA8966C_OFFSET))(a1, a2);
		}
	};
}
