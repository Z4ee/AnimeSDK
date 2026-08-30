#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_114CBDD1AC21341D_OFFSET UNITYSDK_OFFSET(0x1D862BD0)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_6309DF5EEA39E2F3_OFFSET UNITYSDK_OFFSET(0x1D862C10)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D862C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityFieldRingConfig_TypeDefinitionIndex = 18381;

	class FiveDimGravityFieldRingConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravityFieldRing; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Single Radius; // 0x30
		::System::Single CapsuleRadiusWithOutEntityScale; // 0x34
		::System::String* GravityRingRangeEffectPath; // 0x38
		::System::String* GravityRingEnterExitEffectPath; // 0x40
		::System::Boolean SendEventOnInit; // 0x48
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_114CBDD1AC21341D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_114CBDD1AC21341D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6309DF5EEA39E2F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_METHOD_3_6309DF5EEA39E2F3_OFFSET))(a1, a2);
		}
	};
}
