#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PARADOXNOTION_HIERARCHYTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED700)

namespace ParadoxNotion
{
	inline static constexpr unsigned int HierarchyTree_TypeDefinitionIndex = 27206;

	class HierarchyTree : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE__CTOR_OFFSET))(this);
		}
	};
}
