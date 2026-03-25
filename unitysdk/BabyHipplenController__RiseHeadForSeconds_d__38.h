#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8FCA8A0)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCAA70)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8FCAAD0)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8FCAA80)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FCA890)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC7360)

inline static constexpr unsigned int BabyHipplenController__RiseHeadForSeconds_d__38_TypeDefinitionIndex = 38106;

class BabyHipplenController__RiseHeadForSeconds_d__38 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::BabyHipplenController* __4__this; // 0x18
	::System::Single seconds; // 0x20
	::System::Int32 __1__state; // 0x24

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
