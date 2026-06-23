#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionPositionEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define FLUFFYUNDERWARE_DEVTOOLS_ACTIONATTRIBUTE_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1D690070)
#define FLUFFYUNDERWARE_DEVTOOLS_ACTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D690030)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ActionAttribute_TypeDefinitionIndex = 28313;

	class ActionAttribute : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Reflection::MethodInfo* mCallback; // 0x20
		::System::Object* ActionData; // 0x28
		::FluffyUnderware::DevTools::ActionAttribute_ActionEnum Action; // 0x30
		::FluffyUnderware::DevTools::ActionAttribute_ActionPositionEnum Position; // 0x34

		::System::Void _ctor(::System::String* actionData, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ACTIONATTRIBUTE__CTOR_OFFSET))(this, actionData, action);
		}

		::System::Void Callback(::System::Object* classInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ACTIONATTRIBUTE_CALLBACK_OFFSET))(this, classInstance);
		}
	};
}
