#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionEnum.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_FIELDACTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4020)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int FieldActionAttribute_TypeDefinitionIndex = 25833;

	class FieldActionAttribute : public ::FluffyUnderware::DevTools::ActionAttribute
	{
	public:
		::System::Void _ctor(::System::String* actionData, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FIELDACTIONATTRIBUTE__CTOR_OFFSET))(this, actionData, action);
		}
	};
}
