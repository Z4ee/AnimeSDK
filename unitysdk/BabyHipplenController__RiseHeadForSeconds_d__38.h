#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BabyHipplenController;

#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A77F200)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A77F400)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A77F460)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A77F410)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A77F1F0)
#define BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77BD30)

inline static constexpr unsigned int BabyHipplenController__RiseHeadForSeconds_d__38_TypeDefinitionIndex = 47658;

class BabyHipplenController__RiseHeadForSeconds_d__38 : public ::System::Object
{
public:
	::BabyHipplenController* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single seconds; // 0x20
	::System::Int32 __1__state; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER__RISEHEADFORSECONDS_D__38__CTOR_OFFSET))(this, a1);
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
