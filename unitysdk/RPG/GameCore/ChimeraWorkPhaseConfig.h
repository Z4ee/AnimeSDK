#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraWorkPhase; }

#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG_METHOD_2_3D4D4FBC31ADB060_OFFSET UNITYSDK_OFFSET(0x1880CAF0)
#define RPG_GAMECORE_CHIMERAWORKPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1880CE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkPhaseConfig_TypeDefinitionIndex = 15047;

	class ChimeraWorkPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraWorkPhase*>* Phases; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3D4D4FBC31ADB060(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkPhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkPhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASECONFIG_METHOD_2_3D4D4FBC31ADB060_OFFSET))(a1, a2);
		}
	};
}
