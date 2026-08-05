#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_EFFECTFORUISCALE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1A94F6F0)
#define MOLEMOLE_EFFECTFORUISCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94F740)

namespace MoleMole
{
	inline static constexpr unsigned int EffectForUIScale_TypeDefinitionIndex = 40759;

	class EffectForUIScale : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTFORUISCALE__CTOR_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTFORUISCALE_GETDURATION_OFFSET))(this);
		}
	};
}
