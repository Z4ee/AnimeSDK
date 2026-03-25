#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
class Class_2_F52F198CBBF4B801;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B2E060)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10B2E210)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B2E1A0)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10B2E270)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B2E200)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10B2E1B0)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2E040)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2D870)
#define CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x10B2E050)

inline static constexpr unsigned int Class_2_F52F198CBBF4B801__GetAllButtons_d__7_TypeDefinitionIndex = 58960;

class Class_2_F52F198CBBF4B801__GetAllButtons_d__7 : public ::System::Object
{
public:
	::Class_2_F52F198CBBF4B801* __4__this; // 0x10
	::Class_0_16E4307DCC419505_855* __2__current; // 0x18
	::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_855*> __7__wrap1; // 0x20
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_855* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_855*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_855*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_855*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETALLBUTTONS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
