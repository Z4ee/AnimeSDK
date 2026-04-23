#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;
class Class_1_75C90DAFEEA96564;
class Class_1_EAB32D6999AE04E3;
namespace RPG::Client { class AdventurePhase; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A3FCF0)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A409F0)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A40A50)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9A40A00)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A3FA40)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3E480)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9A3FB90)
#define CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x9A3FC40)

inline static constexpr unsigned int Class_1_75C90DAFEEA96564__AsyncLoad_d__42_TypeDefinitionIndex = 56148;

class Class_1_75C90DAFEEA96564__AsyncLoad_d__42 : public ::System::Object
{
public:
	::Class_1_75C90DAFEEA96564* __4__this; // 0x10
	::Class_0_16E4307DCC419505_265* __2__current; // 0x18
	::RPG::Client::AdventurePhase* _adventurePhase_5__2; // 0x20
	::Class_1_EAB32D6999AE04E3* _mgr_5__3; // 0x28
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* _itor_5__4; // 0x30
	::System::Int32 __1__state; // 0x38

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42___M__FINALLY2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_265* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_265*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
