#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C84A84118567060F;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB88C400)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_AreaData_TypeDefinitionIndex = 45551;

	class OctreeManager_AreaData : public ::System::Object
	{
	public:
		::System::Single Weight; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA__CTOR_OFFSET))(this);
		}
	};
}
