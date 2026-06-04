#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EFFECTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0032F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectParameter_TypeDefinitionIndex = 45693;

	class EffectParameter : public ::System::Object
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::UnityEngine::Vector3 OffsetPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
