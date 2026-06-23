#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute.h"
#include "unitysdk/FluffyUnderware/DevTools/ConditionalAttribute_OperatorEnum.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69CB50)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D69CB60)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D69CB70)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69CB40)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int GroupConditionAttribute_TypeDefinitionIndex = 28330;

	class GroupConditionAttribute : public ::FluffyUnderware::DevTools::ConditionalAttribute
	{
	public:
		::System::Void _ctor(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_OFFSET))(this, fieldOrProperty, compareTo, compareFalse);
		}

		::System::Void _ctor_1(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_1_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2);
		}

		::System::Void _ctor_2(::System::String* fieldOrProperty, ::System::Object* compareTo, ::System::Boolean compareFalse, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum op, ::System::String* fieldOrProperty2, ::System::Object* compareTo2, ::System::Boolean compareFalse2, ::System::String* fieldOrProperty3, ::System::Object* compareTo3, ::System::Boolean compareFalse3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean, ::FluffyUnderware::DevTools::ConditionalAttribute_OperatorEnum, ::System::String*, ::System::Object*, ::System::Boolean, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_2_OFFSET))(this, fieldOrProperty, compareTo, compareFalse, op, fieldOrProperty2, compareTo2, compareFalse2, fieldOrProperty3, compareTo3, compareFalse3);
		}

		::System::Void _ctor_3(::System::String* methodToQuery)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPCONDITIONATTRIBUTE__CTOR_3_OFFSET))(this, methodToQuery);
		}
	};
}
