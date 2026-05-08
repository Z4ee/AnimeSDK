#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LYRASECTOR_COLLECTIONSUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81040)

namespace LyraSector
{
	inline static constexpr unsigned int CollectionsUtils_TypeDefinitionIndex = 29671;

	class CollectionsUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_COLLECTIONSUTILS__CTOR_OFFSET))(this);
		}
	};
}
