#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEMONOSCRIPTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329260)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideMonoScriptAttribute_TypeDefinitionIndex = 7313;

	class HideMonoScriptAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEMONOSCRIPTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
