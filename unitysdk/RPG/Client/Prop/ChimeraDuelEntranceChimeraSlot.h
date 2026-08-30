#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELENTRANCECHIMERASLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x189E5270)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelEntranceChimeraSlot_TypeDefinitionIndex = 77847;

	class ChimeraDuelEntranceChimeraSlot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::ChimeraBattleAnimationType AnimType; // 0x18
		::System::Single EyeLayerWeight; // 0x1C
		::System::String* ChimeraEyeAnimatorParamName; // 0x20
		::RPG::GameCore::AnimatorParameterType EyeParamType; // 0x28
		::System::Single EyeParamValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELENTRANCECHIMERASLOT__CTOR_OFFSET))(this);
		}
	};
}
