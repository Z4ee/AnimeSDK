#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRIWARE_CRIMANAVP9INITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x146D9AA0)
#define CRIWARE_CRIMANAVP9INITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x146D9EF0)
#define CRIWARE_CRIMANAVP9INITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x146D9F00)

namespace CriWare
{
	inline static constexpr unsigned int CriManaVP9Initializer_TypeDefinitionIndex = 37239;

	class CriManaVP9Initializer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9INITIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9INITIALIZER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9INITIALIZER_ONENABLE_OFFSET))(this);
		}
	};
}
