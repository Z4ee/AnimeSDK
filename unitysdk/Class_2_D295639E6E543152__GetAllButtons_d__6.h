#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1017;
class Class_2_D295639E6E543152;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14570C00)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14570E40)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14570DD0)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14570EC0)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14570E30)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14570DE0)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14570BE0)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x145709B0)
#define CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14570BF0)

inline static constexpr unsigned int Class_2_D295639E6E543152__GetAllButtons_d__6_TypeDefinitionIndex = 67252;

class Class_2_D295639E6E543152__GetAllButtons_d__6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1017* __2__current; // 0x10
	::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_1017*> __7__wrap1; // 0x18
	::Class_2_D295639E6E543152* __4__this; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1017* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_1017*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1017*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1017*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__GETALLBUTTONS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
