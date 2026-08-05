#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_UICAMERATRANSFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1626DCC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UICameraTransformInfo_TypeDefinitionIndex = 52809;

	class UICameraTransformInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 cameraPos; // 0x10
		::UnityEngine::Vector3 cameraEulerAngles; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UICAMERATRANSFORMINFO__CTOR_OFFSET))(this);
		}
	};
}
