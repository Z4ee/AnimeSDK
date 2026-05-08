#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPDRAGAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA58A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMiniMapDragArea_TypeDefinitionIndex = 44748;

	class MonoMiniMapDragArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPDRAGAREA__CTOR_OFFSET))(this);
		}
	};
}
