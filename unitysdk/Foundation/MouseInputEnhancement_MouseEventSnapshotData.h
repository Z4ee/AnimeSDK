#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_MouseButtonEventData; }

#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x14826C50)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x14826B80)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x802200)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x802160)

namespace Foundation
{
	inline static constexpr unsigned int MouseInputEnhancement_MouseEventSnapshotData_TypeDefinitionIndex = 75157;

	struct alignas(8) MouseInputEnhancement_MouseEventSnapshotData
	{
		::UnityEngine::Vector2 Position; // 0x10
		::UnityEngine::Vector2 Delta; // 0x18
		::UnityEngine::Vector2 ScrollDelta; // 0x20
		::UnityEngine::EventSystems::RaycastResult PointerCurrentRaycast; // 0x28

		static ::Foundation::MouseInputEnhancement_MouseEventSnapshotData CopyFrom(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::Foundation::MouseInputEnhancement_MouseEventSnapshotData(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYFROM_OFFSET))(pointerEventData);
		}

		static ::Foundation::MouseInputEnhancement_MouseEventSnapshotData CopyFrom_1(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* mouseButtonEventData)
		{
			return ((::Foundation::MouseInputEnhancement_MouseEventSnapshotData(*)(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYFROM_1_OFFSET))(mouseButtonEventData);
		}

		::System::Void CopyTo(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYTO_OFFSET))(this, pointerEventData);
		}

		::System::Void CopyTo_1(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* mouseButtonEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEEVENTSNAPSHOTDATA_COPYTO_1_OFFSET))(this, mouseButtonEventData);
		}
	};
}
