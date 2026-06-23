#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E679CC0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoSaveDuringPlayAttribute_TypeDefinitionIndex = 34122;

	class NoSaveDuringPlayAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
