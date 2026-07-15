#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_METHOD_2_E358B126D7896BF2_OFFSET UNITYSDK_OFFSET(0x1BA95290)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA95420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateConfig_TypeDefinitionIndex = 16048;

	class FiveDimEvilSmileStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimEvilSmileState StateType; // 0x10
		::System::Single StateTime; // 0x14
		::RPG::GameCore::FloatCurve* AttackCurve; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* StateEventList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E358B126D7896BF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATECONFIG_METHOD_2_E358B126D7896BF2_OFFSET))(a1, a2);
		}
	};
}
