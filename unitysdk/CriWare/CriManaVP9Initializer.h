#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRIWARE_CRIMANAVP9INITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A51E50)
#define CRIWARE_CRIMANAVP9INITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A522A0)
#define CRIWARE_CRIMANAVP9INITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A522B0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaVP9Initializer_TypeDefinitionIndex = 31219;

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
