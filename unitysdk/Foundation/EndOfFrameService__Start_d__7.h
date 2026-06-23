#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class EndOfFrameService; }

#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6B3B40)
#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E6B3BF0)
#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E6B3C50)
#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E6B3C00)
#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6B3B30)
#define FOUNDATION_ENDOFFRAMESERVICE__START_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3B20)

namespace Foundation
{
	inline static constexpr unsigned int EndOfFrameService__Start_d__7_TypeDefinitionIndex = 8432;

	class EndOfFrameService__Start_d__7 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::Foundation::EndOfFrameService* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__START_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
