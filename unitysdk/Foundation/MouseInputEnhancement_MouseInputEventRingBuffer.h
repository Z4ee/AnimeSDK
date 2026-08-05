#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MouseInputEnhancement_MouseEventSnapshotData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerInputModule_MouseButtonEventData; }

#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_ADVANCE_OFFSET UNITYSDK_OFFSET(0xF23B470)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0xF23B8A0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF23B990)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF23B130)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_POPHANDLEDEVENTS_OFFSET UNITYSDK_OFFSET(0xF23B7A0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_PUSH_OFFSET UNITYSDK_OFFSET(0xF23B550)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xF23AF90)

namespace Foundation
{
	inline static constexpr unsigned int MouseInputEnhancement_MouseInputEventRingBuffer_TypeDefinitionIndex = 75156;

	class MouseInputEnhancement_MouseInputEventRingBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::MouseInputEnhancement_MouseEventSnapshotData>* _snapshot; // 0x10
		::System::Action_1<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>* _onPopAction; // 0x18
		::Il2CppArray<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>* _buffer; // 0x20
		::System::Int32 _ptr; // 0x28
		::System::Boolean _disposed; // 0x2C
		::System::Int32 _head; // 0x30
		::System::Int32 _size; // 0x34
		::System::Int32 _capacity; // 0x38

		::System::Void _ctor(::System::Int32 capacity, ::System::Action_1<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>* onPop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER__CTOR_OFFSET))(this, capacity, onPop);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* get_Current()
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Advance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_ADVANCE_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data, ::Foundation::MouseInputEnhancement_MouseEventSnapshotData snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*, ::Foundation::MouseInputEnhancement_MouseEventSnapshotData))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_PUSH_OFFSET))(this, data, snapshot);
		}

		::System::Void PopHandledEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_POPHANDLEDEVENTS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MOUSEINPUTEVENTRINGBUFFER_DISPOSE_OFFSET))(this);
		}
	};
}
