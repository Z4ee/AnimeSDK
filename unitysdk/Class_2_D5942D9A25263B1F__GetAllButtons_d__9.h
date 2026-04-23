#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_967;
class Class_0_16E4307DCC419505_973;
class Class_2_D5942D9A25263B1F;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAA4A420)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xAA4A670)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAA4A600)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xAA4A6F0)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAA4A660)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAA4A610)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA4A400)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xAA48EB0)
#define CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xAA4A410)

inline static constexpr unsigned int Class_2_D5942D9A25263B1F__GetAllButtons_d__9_TypeDefinitionIndex = 66321;

class Class_2_D5942D9A25263B1F__GetAllButtons_d__9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_967* __2__current; // 0x10
	::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_973*> __7__wrap1; // 0x18
	::Class_2_D5942D9A25263B1F* __4__this; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_967* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_967*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_967*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_967*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5942D9A25263B1F__GETALLBUTTONS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
