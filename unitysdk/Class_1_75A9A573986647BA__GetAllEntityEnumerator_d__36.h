#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_75A9A573986647BA;
namespace RPG::Client { class MapEntityDef; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1280ED40)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1280F100)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1280F160)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1280F110)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1280EBC0)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x1280E740)
#define CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1280EC90)

inline static constexpr unsigned int Class_1_75A9A573986647BA__GetAllEntityEnumerator_d__36_TypeDefinitionIndex = 68853;

class Class_1_75A9A573986647BA__GetAllEntityEnumerator_d__36 : public ::System::Object
{
public:
	::Class_1_75A9A573986647BA* __4__this; // 0x10
	::RPG::Client::MapEntityDef* __2__current; // 0x18
	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* __7__wrap1; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36___M__FINALLY1_OFFSET))(this);
	}

	::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A9A573986647BA__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
