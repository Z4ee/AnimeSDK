#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_510E2A3B742BC0DC;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBEBC330)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBEBC6E0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBEBC670)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBEBC740)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBEBC6D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBEBC680)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEBC2F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBB7D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBEBC300)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xBEBC320)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0xBEBC310)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest__get_ToBeCreateHoyoGroupObjects_d__33_TypeDefinitionIndex = 56890;

	class Map_MapObjectsUpdateRequest__get_ToBeCreateHoyoGroupObjects_d__33 : public ::System::Object
	{
	public:
		::RPG::Client::Map_MapObjectsUpdateRequest* __4__this; // 0x10
		::RPG::Client::MapEntityDef* __2__current; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapEntityDef*> __7__wrap1; // 0x20
		::System::Collections::Generic::List_1_Enumerator<::System::ValueTuple_2<::Class_2_510E2A3B742BC0DC*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>> __7__wrap2; // 0x38
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33___M__FINALLY3_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* System_Collections_Generic_IEnumerable_RPG_Client_MapEntityDef__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBECREATEHOYOGROUPOBJECTS_D__33_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
