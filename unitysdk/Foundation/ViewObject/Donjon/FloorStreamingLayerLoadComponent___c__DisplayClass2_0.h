#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class FloorStreamingLayerLoadComponent_RequestGroupStateCallback; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1199FCA0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent___c__DisplayClass2_0_TypeDefinitionIndex = 68018;

	class FloorStreamingLayerLoadComponent___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Donjon::FloorStreamingLayerLoadComponent_RequestGroupStateCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}
	};
}
