#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18902640)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189029F0)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18902980)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18902A70)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189029E0)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18902990)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18902630)
#define CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0x18902480)

inline static constexpr unsigned int Class_1_A3E915130CAC9AC0___UseLoadingSample_d__26_TypeDefinitionIndex = 38615;

class Class_1_A3E915130CAC9AC0___UseLoadingSample_d__26 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::RPG::Client::AssetSystem::AssetLoader* __3__loader; // 0x18
	::RPG::Client::AssetSystem::AssetLoader* loader; // 0x20
	::System::Boolean isComponent; // 0x28
	::System::Boolean __3__isComponent; // 0x29
	::System::Int32 __1__state; // 0x2C
	::System::Int32 __l__initialThreadId; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
