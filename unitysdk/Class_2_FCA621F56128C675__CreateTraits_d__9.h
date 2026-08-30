#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FCA621F56128C675;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightUnlockTraitMember; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1599E100)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1599EA70)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1599EA00)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1599EAF0)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1599EA60)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1599EA10)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1599DFC0)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1599DEE0)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1599E000)

inline static constexpr unsigned int Class_2_FCA621F56128C675__CreateTraits_d__9_TypeDefinitionIndex = 65176;

class Class_2_FCA621F56128C675__CreateTraits_d__9 : public ::System::Object
{
public:
	::Class_2_FCA621F56128C675* __4__this; // 0x10
	::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x18
	::RPG::Client::GridFightRole* role; // 0x20
	::RPG::Client::GridFightTrait* __2__current; // 0x28
	::RPG::Client::GridFightRole* __3__role; // 0x30
	::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightUnlockTraitMember*>* __7__wrap3; // 0x38
	::System::Int32 __7__wrap2; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44
	::System::Int32 __1__state; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9___M__FINALLY1_OFFSET))(this);
	}

	::RPG::Client::GridFightTrait* System_Collections_Generic_IEnumerator_RPG_Client_GridFightTrait__get_Current()
	{
		return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>* System_Collections_Generic_IEnumerable_RPG_Client_GridFightTrait__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
