#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_D8257A310CAD757C;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9ADAF10)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9ADB1C0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9ADB150)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9ADB220)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9ADB1B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9ADB160)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ADAED0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD94E0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9ADAEE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x9ADAF00)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x9ADAEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest__get_ToBeDestroyObjects_d__35_TypeDefinitionIndex = 49334;

	class Map_MapObjectsUpdateRequest__get_ToBeDestroyObjects_d__35 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::RPG::Client::MapEntityDef*> __7__wrap1; // 0x10
		::RPG::Client::MapEntityDef* __2__current; // 0x28
		::System::Collections::Generic::List_1_Enumerator<::System::ValueTuple_2<::Class_2_D8257A310CAD757C*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>> __7__wrap2; // 0x30
		::RPG::Client::Map_MapObjectsUpdateRequest* __4__this; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35___M__FINALLY3_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* System_Collections_Generic_IEnumerable_RPG_Client_MapEntityDef__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYOBJECTS_D__35_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
