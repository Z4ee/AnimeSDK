#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPIKECONFIG_METHOD_3_86AA40C9FF57A154_OFFSET UNITYSDK_OFFSET(0x1D1038E0)
#define RPG_GAMECORE_FIVEDIMSPIKECONFIG_METHOD_3_F2723B93DC5C2D72_OFFSET UNITYSDK_OFFSET(0x1D1038A0)
#define RPG_GAMECORE_FIVEDIMSPIKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1038D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpikeConfig_TypeDefinitionIndex = 18377;

	class FiveDimSpikeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSpike; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::System::String* MovePath; // 0x38
		::RPG::MVector3 ActiveOffset; // 0x40
		::RPG::MVector3 InactiveOffset; // 0x4C
		::System::Single MoveDuration; // 0x58
		::System::Boolean SendEventOnInit; // 0x5C
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* HitEvent; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2723B93DC5C2D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpikeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpikeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG_METHOD_3_F2723B93DC5C2D72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86AA40C9FF57A154(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpikeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpikeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG_METHOD_3_86AA40C9FF57A154_OFFSET))(a1, a2);
		}
	};
}
