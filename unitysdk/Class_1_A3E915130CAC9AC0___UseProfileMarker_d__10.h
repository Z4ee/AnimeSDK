#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetSystem/MarkerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A4B1A60)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4B1B50)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4B1AE0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4B1BD0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4B1B40)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A4B1AF0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4B1A50)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B0D40)

inline static constexpr unsigned int Class_1_A3E915130CAC9AC0___UseProfileMarker_d__10_TypeDefinitionIndex = 40298;

class Class_1_A3E915130CAC9AC0___UseProfileMarker_d__10 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::RPG::Client::AssetSystem::MarkerType type; // 0x18
	::System::Int32 __l__initialThreadId; // 0x1C
	::System::Int32 __1__state; // 0x20
	::RPG::Client::AssetSystem::MarkerType __3__type; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILEMARKER_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
