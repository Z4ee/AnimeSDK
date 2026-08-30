#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_5785E841F994265E_OFFSET UNITYSDK_OFFSET(0x1D3A0C10)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_789F74B7A37A1B87_OFFSET UNITYSDK_OFFSET(0x1D3A0BC0)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveWalkingEffect_TypeDefinitionIndex = 22183;

	class RemoveWalkingEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPrefab; // 0x20
		::System::Boolean IsNeedFadeOut; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_789F74B7A37A1B87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveWalkingEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveWalkingEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_789F74B7A37A1B87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5785E841F994265E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_5785E841F994265E_OFFSET))(a1, a2);
		}
	};
}
