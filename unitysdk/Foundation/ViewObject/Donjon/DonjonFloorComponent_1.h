#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorComponent_1_TypeDefinitionIndex = 52245;

	template <typename T>
	class DonjonFloorComponent_1 : public ::System::Object
	{
	public:
		::System::Boolean _enable; // 0x0
		::Foundation::ViewObject::Donjon::DonjonFloorObject* _owner; // 0x0
	};
}
