#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29DD4BD5303CB66D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_ATTACHEFFECTCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1301F560)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int AttachEffectCfg_TypeDefinitionIndex = 81031;

	class AttachEffectCfg : public ::System::Object
	{
	public:
		::System::String* EffectNameTag; // 0x10
		::System::String* EffectPattern; // 0x18
		::System::Int32 NpcTagID; // 0x20
		::System::String* MemberID; // 0x28
		::System::String* AttachPiontName; // 0x30
		::System::String* ConfigPosRotKey; // 0x38
		::UnityEngine::Vector3 EffectScale; // 0x40
		::Enum_3_29DD4BD5303CB66D AttachPointRotation; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ATTACHEFFECTCFG__CTOR_OFFSET))(this);
		}
	};
}
