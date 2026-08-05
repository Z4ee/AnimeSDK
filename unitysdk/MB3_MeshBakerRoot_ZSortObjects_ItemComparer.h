#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB3_MeshBakerRoot_ZSortObjects_Item;

#define MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEMCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F8902C0)
#define MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEMCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F890300)

inline static constexpr unsigned int MB3_MeshBakerRoot_ZSortObjects_ItemComparer_TypeDefinitionIndex = 94480;

class MB3_MeshBakerRoot_ZSortObjects_ItemComparer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEMCOMPARER__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::MB3_MeshBakerRoot_ZSortObjects_Item* a, ::MB3_MeshBakerRoot_ZSortObjects_Item* b)
	{
		return ((::System::Int32(*)(::PVOID, ::MB3_MeshBakerRoot_ZSortObjects_Item*, ::MB3_MeshBakerRoot_ZSortObjects_Item*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEMCOMPARER_COMPARE_OFFSET))(this, a, b);
	}
};
