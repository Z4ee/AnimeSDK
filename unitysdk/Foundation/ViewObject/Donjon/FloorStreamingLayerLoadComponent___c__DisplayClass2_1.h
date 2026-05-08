#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_620977F55CD7E401_5;
namespace Foundation::ViewObject::Donjon { class FloorStreamingLayerLoadComponent___c__DisplayClass2_0; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A39D60)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__ONENABLE_B__1_OFFSET UNITYSDK_OFFSET(0x12A39D70)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent___c__DisplayClass2_1_TypeDefinitionIndex = 79789;

	class FloorStreamingLayerLoadComponent___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Donjon::FloorStreamingLayerLoadComponent___c__DisplayClass2_0* CS___8__locals1; // 0x10
		::System::Int32 groupId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnable_b__1(::System::Boolean success, ::Class_3_620977F55CD7E401_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_620977F55CD7E401_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__ONENABLE_B__1_OFFSET))(this, success, rsp);
		}
	};
}
