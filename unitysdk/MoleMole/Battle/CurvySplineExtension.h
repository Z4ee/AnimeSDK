#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_CURVYSPLINEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F1F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurvySplineExtension_TypeDefinitionIndex = 70760;

	class CurvySplineExtension : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* patternKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVYSPLINEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
