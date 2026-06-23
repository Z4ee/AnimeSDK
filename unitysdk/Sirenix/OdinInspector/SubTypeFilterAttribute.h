#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_ODININSPECTOR_SUBTYPEFILTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A540)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SubTypeFilterAttribute_TypeDefinitionIndex = 7359;

	class SubTypeFilterAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* typeFilters; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* filterTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SUBTYPEFILTERATTRIBUTE__CTOR_OFFSET))(this, filterTypes);
		}
	};
}
