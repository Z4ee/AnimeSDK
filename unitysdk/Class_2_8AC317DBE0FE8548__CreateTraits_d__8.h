#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_2_8AC317DBE0FE8548;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightUnlockTraitMember; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16FB4400)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FB52A0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16FB5230)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FB5320)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16FB5290)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16FB5240)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FB42B0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB4290)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16FB42F0)
#define CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x16FB4300)

inline static constexpr unsigned int Class_2_8AC317DBE0FE8548__CreateTraits_d__8_TypeDefinitionIndex = 62185;

class Class_2_8AC317DBE0FE8548__CreateTraits_d__8 : public ::System::Object
{
public:
	::RPG::Client::GridFightRole* role; // 0x10
	::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x18
	::RPG::Client::GridFightTrait* _trait_5__4; // 0x20
	::RPG::Client::GridFightTrait* __2__current; // 0x28
	::Class_2_8AC317DBE0FE8548* __4__this; // 0x30
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::GridFightTraitConfig*> __7__wrap4; // 0x38
	::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightUnlockTraitMember*>* __7__wrap5; // 0x50
	::RPG::Client::GridFightRole* __3__role; // 0x58
	::System::Int32 __7__wrap2; // 0x60
	::System::Int32 __1__state; // 0x64
	::System::Int32 __l__initialThreadId; // 0x68

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CREATETRAITS_D__8___M__FINALLY2_OFFSET))(this);
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
