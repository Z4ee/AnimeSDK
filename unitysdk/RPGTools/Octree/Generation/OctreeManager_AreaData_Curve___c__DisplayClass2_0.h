#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB88C430)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB88C410)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_AreaData_Curve___c__DisplayClass2_0_TypeDefinitionIndex = 45549;

	class OctreeManager_AreaData_Curve___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* math; // 0x10
		::Class_1_C84A84118567060F* tree; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _BuildData_b__0(::Struct_2_23A3535C3AD26D5F node)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET))(this, node);
		}
	};
}
