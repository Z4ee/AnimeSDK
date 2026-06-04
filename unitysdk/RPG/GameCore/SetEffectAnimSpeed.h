#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_2A46242B0C8A8F15_OFFSET UNITYSDK_OFFSET(0x19C491D0)
#define RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_30B69F64DEA1AA49_OFFSET UNITYSDK_OFFSET(0x19C49250)
#define RPG_GAMECORE_SETEFFECTANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x19C49220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimSpeed_TypeDefinitionIndex = 21637;

	class SetEffectAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single AnimSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A46242B0C8A8F15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_2A46242B0C8A8F15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30B69F64DEA1AA49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_30B69F64DEA1AA49_OFFSET))(a1, a2);
		}
	};
}
