#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A9C6D0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9C870)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A9C8D0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A9C880)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A9C6C0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9BF90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer__QACaptureAll_d__13_TypeDefinitionIndex = 29249;

	class FramePassCapturer__QACaptureAll_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Int32 height; // 0x1C
		::System::Int32 width; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__QACAPTUREALL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
