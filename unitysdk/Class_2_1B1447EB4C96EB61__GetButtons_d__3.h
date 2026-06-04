#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1017;
class Class_0_16E4307DCC419505_1021;
class Class_2_1B1447EB4C96EB61;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1431A8F0)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1431AFE0)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1431AF70)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1431B040)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1431AFD0)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1431AF80)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1431A5F0)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x14317AF0)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1431A850)
#define CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1431A7B0)

inline static constexpr unsigned int Class_2_1B1447EB4C96EB61__GetButtons_d__3_TypeDefinitionIndex = 67243;

class Class_2_1B1447EB4C96EB61__GetButtons_d__3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1017* __2__current; // 0x10
	::Class_2_1B1447EB4C96EB61* __4__this; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1021*>* __7__wrap1; // 0x20
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1017*>* __7__wrap2; // 0x28
	::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x30
	::System::Int32 __l__initialThreadId; // 0x34
	::System::Int32 __1__state; // 0x38
	::RPG::Client::UISkillIndex uiSkillIndex; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3___M__FINALLY2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1017* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_1017*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1017*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1017*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1447EB4C96EB61__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
