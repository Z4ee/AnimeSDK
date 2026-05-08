#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C022280)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TypeFilter4CollectionAttribute_TypeDefinitionIndex = 7243;

	class TypeFilter4CollectionAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* typeFilters; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* filterTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTER4COLLECTIONATTRIBUTE__CTOR_OFFSET))(this, filterTypes);
		}
	};
}
