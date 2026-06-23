#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWPROPERTYRESOLVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A530)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowPropertyResolverAttribute_TypeDefinitionIndex = 7358;

	class ShowPropertyResolverAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWPROPERTYRESOLVERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
