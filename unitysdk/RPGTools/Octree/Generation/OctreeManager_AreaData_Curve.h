#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeManager_AreaData.h"

class Class_1_C84A84118567060F;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPGTools::Octree::Generation { class OctreeAreaData; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_METHOD_2_B3C2DB7D307B56BB_OFFSET UNITYSDK_OFFSET(0xAB17BB0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB18660)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_AreaData_Curve_TypeDefinitionIndex = 39639;

	class OctreeManager_AreaData_Curve : public ::RPGTools::Octree::Generation::OctreeManager_AreaData
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x18
		::System::Int32 DesiredSearchCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE__CTOR_OFFSET))(this);
		}

		::RPGTools::Octree::Generation::OctreeAreaData* Method_2_B3C2DB7D307B56BB(::Class_1_C84A84118567060F* a1)
		{
			return ((::RPGTools::Octree::Generation::OctreeAreaData*(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_METHOD_2_B3C2DB7D307B56BB_OFFSET))(this, a1);
		}
	};
}
