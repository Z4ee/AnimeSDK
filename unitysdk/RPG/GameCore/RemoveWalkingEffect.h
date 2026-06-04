#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_5785E841F994265E_OFFSET UNITYSDK_OFFSET(0x19ACAEB0)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_6040B37434A5F3B1_OFFSET UNITYSDK_OFFSET(0x19ACAE30)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACAE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveWalkingEffect_TypeDefinitionIndex = 21205;

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

		static ::System::Void Method_3_6040B37434A5F3B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveWalkingEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveWalkingEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_6040B37434A5F3B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5785E841F994265E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_METHOD_3_5785E841F994265E_OFFSET))(a1, a2);
		}
	};
}
