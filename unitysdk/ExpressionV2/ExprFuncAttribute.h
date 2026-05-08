#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define EXPRESSIONV2_EXPRFUNCATTRIBUTE_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x15492BD0)
#define EXPRESSIONV2_EXPRFUNCATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15492BE0)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExprFuncAttribute_TypeDefinitionIndex = 68087;

	class ExprFuncAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Names_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::String*>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRFUNCATTRIBUTE__CTOR_OFFSET))(this, names);
		}

		::Il2CppArray<::System::String*>* get_Names()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRFUNCATTRIBUTE_GET_NAMES_OFFSET))(this);
		}
	};
}
