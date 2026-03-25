#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB97B60)
#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB97CE0)
#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB97D40)
#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAB97CF0)
#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB97B50)
#define RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0xAB97990)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEMixer___FailScreenTransfer_d__5_TypeDefinitionIndex = 39106;

	class QTEMixer___FailScreenTransfer_d__5 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___FAILSCREENTRANSFER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
