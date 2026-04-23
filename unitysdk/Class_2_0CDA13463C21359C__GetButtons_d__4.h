#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_967;
class Class_0_16E4307DCC419505_971;
class Class_2_0CDA13463C21359C;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAA6CDA0)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xAA6D460)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAA6D3F0)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xAA6D4C0)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAA6D450)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAA6D400)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA6CA80)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xAA698A0)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xAA6CCF0)
#define CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xAA6CC40)

inline static constexpr unsigned int Class_2_0CDA13463C21359C__GetButtons_d__4_TypeDefinitionIndex = 66303;

class Class_2_0CDA13463C21359C__GetButtons_d__4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_967* __2__current; // 0x10
	::Class_2_0CDA13463C21359C* __4__this; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_967*>* __7__wrap2; // 0x20
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_971*>* __7__wrap1; // 0x28
	::System::Int32 __l__initialThreadId; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4___M__FINALLY2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_967* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_967*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_967*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_967*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDA13463C21359C__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
