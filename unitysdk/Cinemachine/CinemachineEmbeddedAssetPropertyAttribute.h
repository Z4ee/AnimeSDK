#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEEMBEDDEDASSETPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1463BA20)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineEmbeddedAssetPropertyAttribute_TypeDefinitionIndex = 36893;

	class CinemachineEmbeddedAssetPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Boolean WarnIfNull; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEMBEDDEDASSETPROPERTYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
