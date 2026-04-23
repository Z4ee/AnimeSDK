#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_METHOD_3_D596F24D78A575E6_OFFSET UNITYSDK_OFFSET(0x188FD330)
#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_METHOD_3_DD7B845D8293EC84_OFFSET UNITYSDK_OFFSET(0x188FD2C0)
#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FD310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestructiblePropConfig_TypeDefinitionIndex = 17613;

	class FiveDimDestructiblePropConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDestructible; // 0x10
		::System::Boolean DisableColliderOnDestruct; // 0x11
		::System::Boolean DisableRenderOnDestruct; // 0x12
		::System::String* RageRIStateName; // 0x18
		::RPG::GameCore::FiveDimEntityShakeConfig* ShakeConfig; // 0x20
		::System::String* DestructEffectPath; // 0x28
		::System::String* PlaceholderRIStateName; // 0x30
		::System::Single DestructDelay; // 0x38
		::System::Boolean AutoRebuild; // 0x3C
		::System::Single RebuildDelay; // 0x40
		::RPG::GameCore::LittleGameEvent* OnStartDestruct; // 0x48
		::RPG::GameCore::LittleGameEvent* OnDestruct; // 0x50
		::RPG::GameCore::LittleGameEvent* OnRebuild; // 0x58
		::RPG::GameCore::LittleGameEvent* OnRebuildBlock; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD7B845D8293EC84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructiblePropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_METHOD_3_DD7B845D8293EC84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D596F24D78A575E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructiblePropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_METHOD_3_D596F24D78A575E6_OFFSET))(a1, a2);
		}
	};
}
