#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_ABCC8DEFAB2AFCF2_OFFSET UNITYSDK_OFFSET(0x19743710)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_DF539A0ABF2224D0_OFFSET UNITYSDK_OFFSET(0x197436A0)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197436F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimInteractEmitterConfig_TypeDefinitionIndex = 17653;

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

		static ::System::Void Method_3_DF539A0ABF2224D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimInteractEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_DF539A0ABF2224D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABCC8DEFAB2AFCF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimInteractEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_METHOD_3_ABCC8DEFAB2AFCF2_OFFSET))(a1, a2);
		}
	};
}
