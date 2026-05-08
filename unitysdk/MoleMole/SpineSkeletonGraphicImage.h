#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_SPINESKELETONGRAPHICIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x11782980)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicImage_TypeDefinitionIndex = 65643;

	class SpineSkeletonGraphicImage : public ::System::Object
	{
	public:
		::System::Boolean bindSize; // 0x10
		::UnityEngine::UI::RawImage* rawImage; // 0x18
		::UnityEngine::CanvasRenderer* canvasRenderer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICIMAGE__CTOR_OFFSET))(this);
		}
	};
}
