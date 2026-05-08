#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_NESDATACACHEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFD050)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NESDataCacheBase_TypeDefinitionIndex = 57917;

	class NESDataCacheBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESDATACACHEBASE__CTOR_OFFSET))(this);
		}
	};
}
