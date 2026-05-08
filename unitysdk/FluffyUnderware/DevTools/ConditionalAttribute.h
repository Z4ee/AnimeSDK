#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ActionAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute_OperatorEnum.h"

namespace FluffyUnderware::DevTools { class ConditionalAttribute_Condition; }
namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_CONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1B2C9500)
#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B2C95F0)
#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2C8F80)
#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2C9160)
#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B2C93F0)
#define FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C8E50)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ConditionalAttribute_TypeDefinitionIndex = 25822;

	class ConditionalAttribute : public ::FluffyUnderware::DevTools::ActionAttribute
	{
	public:
		::Il2CppArray<::FluffyUnderware::DevTools::ConditionalAttribute_Condition*>* Conditions; // 0x38

		::System::Void _ctor(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_OFFSET))(this, fieldOrProperty, compareTo, compareFalse);
		}

		::System::Void _ctor_1(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_1_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2);
		}

		::System::Void _ctor_2(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2, ::System::String* fieldOrProperty3, ::System::Object* compareTo3, ::System::Boolean compareFalse3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_2_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2, fieldOrProperty3, compareTo3, compareFalse3);
		}

		::System::Void _ctor_3(::System::String* methodToQuery)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE__CTOR_3_OFFSET))(this, methodToQuery);
		}

		::System::Boolean ConditionMet(::System::Object* classInstance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_CONDITIONMET_OFFSET))(this, classInstance);
		}

		::System::Boolean evaluate(::FluffyUnderware::DevTools::ConditionalAttribute_Condition* cond, ::System::Object* classInstance)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::DevTools::ConditionalAttribute_Condition*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_CONDITIONALATTRIBUTE_EVALUATE_OFFSET))(this, cond, classInstance);
		}
	};
}
