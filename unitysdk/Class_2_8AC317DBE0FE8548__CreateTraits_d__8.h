#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8AC317DBE0FE8548;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x129F0AC0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x129F0D70)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129F0D00)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x129F0DF0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129F0D60)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x129F0D10)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129F0AB0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x129F09F0)

inline static constexpr unsigned int Class_2_8AC317DBE0FE8548__CreateTraits_d__8_TypeDefinitionIndex = 59938;

class Class_2_8AC317DBE0FE8548__CreateTraits_d__8 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x10
	::RPG::Client::GridFightRole* __3__role; // 0x18
	::RPG::Client::GridFightTrait* __2__current; // 0x20
	::Class_2_8AC317DBE0FE8548* __4__this; // 0x28
	::RPG::Client::GridFightRole* role; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __7__wrap2; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_MOVENEXT_OFFSET))(this);
	}

	::RPG::Client::GridFightTrait* System_Collections_Generic_IEnumerator_RPG_Client_GridFightTrait__get_Current()
	{
		return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>* System_Collections_Generic_IEnumerable_RPG_Client_GridFightTrait__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
