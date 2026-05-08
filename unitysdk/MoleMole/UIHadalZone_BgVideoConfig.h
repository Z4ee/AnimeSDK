#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_UIHADALZONE_BGVIDEOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x149EEBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_BgVideoConfig_TypeDefinitionIndex = 62994;

	class UIHadalZone_BgVideoConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* dynamicZoneBgVideo; // 0x18
		::System::String* fixedZoneBgVideo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_BGVIDEOCONFIG__CTOR_OFFSET))(this);
		}
	};
}
