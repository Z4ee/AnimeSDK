#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_114CBDD1AC21341D_OFFSET UNITYSDK_OFFSET(0x171F5030)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_CE63A19536A4B258_OFFSET UNITYSDK_OFFSET(0x171F50A0)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F5080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityFieldRingConfig_TypeDefinitionIndex = 17062;

	class FiveDimGravityFieldRingConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravityFieldRing; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Single Radius; // 0x30
		::System::Boolean SendEventOnInit; // 0x34
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x38
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_114CBDD1AC21341D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_114CBDD1AC21341D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE63A19536A4B258(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_CE63A19536A4B258_OFFSET))(a1, a2);
		}
	};
}
