#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DICTIONARYSHAREDCOMPARERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F740)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DictionarySharedComparerAttribute_TypeDefinitionIndex = 7144;

	class DictionarySharedComparerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DICTIONARYSHAREDCOMPARERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
