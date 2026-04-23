#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_0AC901BFE4E36FC0;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }

#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1119CB20)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1119CF00)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1119CF60)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1119CF10)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1119CAD0)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1119C390)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1119CAE0)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1119CAF0)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1119CB00)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1119CB10)

inline static constexpr unsigned int Class_1_0AC901BFE4E36FC0__GetAllEntityEnumerator_d__23_TypeDefinitionIndex = 68855;

class Class_1_0AC901BFE4E36FC0__GetAllEntityEnumerator_d__23 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapDistrictDef*> __7__wrap3; // 0x10
	::Class_1_0AC901BFE4E36FC0* __4__this; // 0x28
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapNpcDef*> __7__wrap1; // 0x30
	::RPG::Client::MapEntityDef* __2__current; // 0x48
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapPropDef*> __7__wrap2; // 0x50
	::System::Int32 __1__state; // 0x68

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY2_OFFSET))(this);
	}

	::System::Void __m__Finally3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY3_OFFSET))(this);
	}

	::System::Void __m__Finally4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY4_OFFSET))(this);
	}

	::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
