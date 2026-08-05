#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINEDITORMODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FE50)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInEditorModeAttribute_TypeDefinitionIndex = 7282;

	class DisableInEditorModeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINEDITORMODEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
