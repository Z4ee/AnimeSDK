#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1B527150)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527130)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_AreaData_Curve___c__DisplayClass2_0_TypeDefinitionIndex = 49334;

	class OctreeManager_AreaData_Curve___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* math; // 0x10
		::Class_1_C84A84118567060F* tree; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _BuildData_b__0(::Struct_2_A143022D1701BC76 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_A143022D1701BC76))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET))(this, a1);
		}
	};
}
