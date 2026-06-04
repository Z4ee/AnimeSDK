#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_METHOD_3_C0BDFBDE6FF7D5E2_OFFSET UNITYSDK_OFFSET(0x19E070A0)
#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_METHOD_3_C37B86C1F5E3C614_OFFSET UNITYSDK_OFFSET(0x19E07120)
#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E070F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAfterImageEffect_TypeDefinitionIndex = 19106;

	class TriggerAfterImageEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPrefab; // 0x18
		::RPG::GameCore::CharacterMotionFlag LimitMotionFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0BDFBDE6FF7D5E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAfterImageEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAfterImageEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_METHOD_3_C0BDFBDE6FF7D5E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C37B86C1F5E3C614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAfterImageEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAfterImageEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_METHOD_3_C37B86C1F5E3C614_OFFSET))(a1, a2);
		}
	};
}
