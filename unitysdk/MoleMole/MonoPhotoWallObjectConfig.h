#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_3E2902AE141B8B89;

#define MOLEMOLE_MONOPHOTOWALLOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10812E90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhotoWallObjectConfig_TypeDefinitionIndex = 44175;

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
