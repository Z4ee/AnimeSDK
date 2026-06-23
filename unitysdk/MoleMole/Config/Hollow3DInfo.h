#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_HOLLOW3DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6E080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Hollow3DInfo_TypeDefinitionIndex = 72439;

	class Hollow3DInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 scale; // 0x10
		::UnityEngine::Vector3 position; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOW3DINFO__CTOR_OFFSET))(this);
		}
	};
}
