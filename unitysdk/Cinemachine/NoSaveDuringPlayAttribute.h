#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x14664180)

namespace Cinemachine
{
	inline static constexpr unsigned int NoSaveDuringPlayAttribute_TypeDefinitionIndex = 36890;

	class NoSaveDuringPlayAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
