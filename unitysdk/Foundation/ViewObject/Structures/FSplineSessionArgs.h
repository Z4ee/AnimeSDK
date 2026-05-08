#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FSplineSessionArgs_TypeDefinitionIndex = 50664;

	struct alignas(8) FSplineSessionArgs
	{
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x10
		::System::String* SplineName; // 0x20
		::MoleMole::Config::Spline_WayPoint WayPoint; // 0x28
	};
}
