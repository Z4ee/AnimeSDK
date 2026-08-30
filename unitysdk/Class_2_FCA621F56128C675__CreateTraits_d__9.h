#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FCA621F56128C675;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightUnlockTraitMember; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17692290)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17692C00)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17692B90)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17692C80)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17692BF0)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17692BA0)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17692150)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x17692070)
#define CLASS_2_FCA621F56128C675__CREATETRAITS_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17692190)

inline static constexpr unsigned int Class_2_FCA621F56128C675__CreateTraits_d__9_TypeDefinitionIndex = 65176;

class Class_2_FCA621F56128C675__CreateTraits_d__9 : public ::System::Object
{
public:
	::RPG::Client::GridFightRole* __3__role; // 0x10
	::RPG::Client::GridFightTrait* __2__current; // 0x18
	::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightUnlockTraitMember*>* __7__wrap3; // 0x20
	::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x28
	::RPG::Client::GridFightRole* role; // 0x30
	::Class_2_FCA621F56128C675* __4__this; // 0x38
	::System::Int32 __l__initialThreadId; // 0x40
	::System::Int32 __7__wrap2; // 0x44
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
