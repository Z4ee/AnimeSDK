#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOMISSIONTIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11640170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMissionTipsConfig_TypeDefinitionIndex = 52543;

	class MonoMissionTipsConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* FadeInAnim; // 0x18
		::System::Single FadeInterval; // 0x20
		::System::String* FadeCurveKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMISSIONTIPSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
