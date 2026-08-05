#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"

namespace MoleMole::Config { class FloorStreamingLayerLoadEntry; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15419610)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15419D00)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15419D50)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15419D70)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent_TypeDefinitionIndex = 68016;

	class FloorStreamingLayerLoadComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorStreamingLayerLoadComponent*>
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::FloorStreamingLayerLoadEntry*>* LoadList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
