#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_299BDD5073880686_OFFSET UNITYSDK_OFFSET(0x1D4FA220)
#define RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_30B69F64DEA1AA49_OFFSET UNITYSDK_OFFSET(0x1D4FA260)
#define RPG_GAMECORE_SETEFFECTANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FA250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimSpeed_TypeDefinitionIndex = 22628;

	class SetEffectAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single AnimSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_299BDD5073880686(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_299BDD5073880686_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30B69F64DEA1AA49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMSPEED_METHOD_3_30B69F64DEA1AA49_OFFSET))(a1, a2);
		}
	};
}
