#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }

#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_METHOD_3_306A213AD2195DE2_OFFSET UNITYSDK_OFFSET(0x1BEA7050)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_METHOD_3_76DDBA987AC68B69_OFFSET UNITYSDK_OFFSET(0x1BEA7090)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA7080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneSidePassPropConfig_TypeDefinitionIndex = 17814;

	class FiveDimOneSidePassPropConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean OneSidePass; // 0x10
		::RPG::GameCore::FiveDimOneSidePassConfig* OneSidePassConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_306A213AD2195DE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOneSidePassPropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOneSidePassPropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_METHOD_3_306A213AD2195DE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76DDBA987AC68B69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOneSidePassPropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOneSidePassPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_METHOD_3_76DDBA987AC68B69_OFFSET))(a1, a2);
		}
	};
}
