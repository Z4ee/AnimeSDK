#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_CUSTOMLISTMERGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F680)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CustomListMergeAttribute_TypeDefinitionIndex = 7138;

	class CustomListMergeAttribute : public ::System::Attribute
	{
	public:
		::System::String* CustomMergeFunction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMLISTMERGEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
