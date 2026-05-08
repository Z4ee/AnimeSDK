#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_3E2902AE141B8B89;

#define MOLEMOLE_MONOPHOTOWALLOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA40A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhotoWallObjectConfig_TypeDefinitionIndex = 79136;

	class MonoPhotoWallObjectConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_3E2902AE141B8B89* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHOTOWALLOBJECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
