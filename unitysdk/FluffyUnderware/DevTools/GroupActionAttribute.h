#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionEnum.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_GROUPACTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4700)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int GroupActionAttribute_TypeDefinitionIndex = 25834;

	class GroupActionAttribute : public ::FluffyUnderware::DevTools::ActionAttribute
	{
	public:
		::System::Void _ctor(::System::String* actionData, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPACTIONATTRIBUTE__CTOR_OFFSET))(this, actionData, action);
		}
	};
}
