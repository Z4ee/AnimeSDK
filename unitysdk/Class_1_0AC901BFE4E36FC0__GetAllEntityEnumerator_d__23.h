#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_0AC901BFE4E36FC0;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }

#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15420180)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15420730)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15420790)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15420740)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15420130)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1541F6F0)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15420140)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x15420150)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x15420160)
#define CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x15420170)

inline static constexpr unsigned int Class_1_0AC901BFE4E36FC0__GetAllEntityEnumerator_d__23_TypeDefinitionIndex = 74490;

class Class_1_0AC901BFE4E36FC0__GetAllEntityEnumerator_d__23 : public ::System::Object
{
public:
	::Class_1_0AC901BFE4E36FC0* __4__this; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapDistrictDef*> __7__wrap3; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapNpcDef*> __7__wrap1; // 0x30
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapPropDef*> __7__wrap2; // 0x48
	::RPG::Client::MapEntityDef* __2__current; // 0x60
	::System::Int32 __1__state; // 0x68

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__GETALLENTITYENUMERATOR_D__23__CTOR_OFFSET))(this, a1);
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
