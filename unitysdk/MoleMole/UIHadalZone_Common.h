#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIHADALZONE_COMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF23A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_TypeDefinitionIndex = 54848;

	class UIHadalZone_Common : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON__CTOR_OFFSET))(this);
		}
	};
}
