#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_METHOD_3_48B8777FFE4F5F63_OFFSET UNITYSDK_OFFSET(0x1D302E10)
#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_METHOD_3_C2CAC885E67296E4_OFFSET UNITYSDK_OFFSET(0x1D302E50)
#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D302E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideAdventureCharacterTiltConfig_TypeDefinitionIndex = 20283;

	class OverrideAdventureCharacterTiltConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18
		::RPG::GameCore::DynamicString* OverrideConfigPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48B8777FFE4F5F63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_METHOD_3_48B8777FFE4F5F63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2CAC885E67296E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_METHOD_3_C2CAC885E67296E4_OFFSET))(a1, a2);
		}
	};
}
