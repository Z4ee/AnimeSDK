#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_ODINNEWCONDITIONALMEMBERATTRIBUTE_GET_FULLCONDITIONSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1C501F30)
#define SIRENIX_SERIALIZATION_ODINNEWCONDITIONALMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C501F40)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int OdinNewConditionalMemberAttribute_TypeDefinitionIndex = 7463;

	class OdinNewConditionalMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* _FullConditionStatement_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* fullConditionStatement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ODINNEWCONDITIONALMEMBERATTRIBUTE__CTOR_OFFSET))(this, fullConditionStatement);
		}

		::System::String* get_FullConditionStatement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ODINNEWCONDITIONALMEMBERATTRIBUTE_GET_FULLCONDITIONSTATEMENT_OFFSET))(this);
		}
	};
}
