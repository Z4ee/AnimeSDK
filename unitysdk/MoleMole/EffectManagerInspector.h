#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_EFFECTMANAGERINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x186CD9F0)

namespace MoleMole
{
	inline static constexpr unsigned int EffectManagerInspector_TypeDefinitionIndex = 55122;

	class EffectManagerInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTMANAGERINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
