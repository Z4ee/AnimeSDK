#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute_ActionPositionEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute_OperatorEnum.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69C3D0)
#define FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D69C3E0)
#define FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D69C3F0)
#define FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C390)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int FieldConditionAttribute_TypeDefinitionIndex = 28329;

	class FieldConditionAttribute : public ::FluffyUnderware::DevTools::ConditionalAttribute
	{
	public:
		::System::Void _ctor(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum action, ::System::Object* actionData, ::FluffyUnderware::DevTools::ActionAttribute_ActionPositionEnum position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ActionAttribute_ActionEnum, ::System::Object*, ::FluffyUnderware::DevTools::ActionAttribute_ActionPositionEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, action, actionData, position);
		}

		::System::Void _ctor_1(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_1_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2);
		}

		::System::Void _ctor_2(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2, ::System::String* fieldOrProperty3, ::System::Object* compareTo3, ::System::Boolean compareFalse3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_2_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2, fieldOrProperty3, compareTo3, compareFalse3);
		}

		::System::Void _ctor_3(::System::String* methodToQuery)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FIELDCONDITIONATTRIBUTE__CTOR_3_OFFSET))(this, methodToQuery);
		}
	};
}
