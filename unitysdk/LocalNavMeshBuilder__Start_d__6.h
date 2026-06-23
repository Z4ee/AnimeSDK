#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LocalNavMeshBuilder;

#define LOCALNAVMESHBUILDER__START_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15C8F250)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C8F2A0)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C8F300)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15C8F2B0)
#define LOCALNAVMESHBUILDER__START_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C8F240)
#define LOCALNAVMESHBUILDER__START_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8F230)

inline static constexpr unsigned int LocalNavMeshBuilder__Start_d__6_TypeDefinitionIndex = 76664;

class LocalNavMeshBuilder__Start_d__6 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::LocalNavMeshBuilder* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__START_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
