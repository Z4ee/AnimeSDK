#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CINEMACHINE_SAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8149D0)

namespace Cinemachine
{
	inline static constexpr unsigned int SaveDuringPlayAttribute_TypeDefinitionIndex = 34121;

	class SaveDuringPlayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
