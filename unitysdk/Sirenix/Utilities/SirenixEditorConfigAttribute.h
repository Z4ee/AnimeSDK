#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Utilities/GlobalConfigAttribute.h"

#define SIRENIX_UTILITIES_SIRENIXEDITORCONFIGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADBF40)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixEditorConfigAttribute_TypeDefinitionIndex = 6466;

	class SirenixEditorConfigAttribute : public ::Sirenix::Utilities::GlobalConfigAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXEDITORCONFIGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
