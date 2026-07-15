#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D66B60)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeLinkData_TypeDefinitionIndex = 47059;

	class OctreeLinkData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Vector3 localPosition; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKDATA__CTOR_OFFSET))(this);
		}
	};
}
