#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D10B9F60C69ABAA3;
namespace RPG::Client { class GlobalDispatchData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB28DFB0)
#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB28E390)
#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB28E3F0)
#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB28E3A0)
#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB28DFA0)
#define CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0xB28DD20)

inline static constexpr unsigned int Class_1_D10B9F60C69ABAA3__StartPingServer_d__0_TypeDefinitionIndex = 56672;

class Class_1_D10B9F60C69ABAA3__StartPingServer_d__0 : public ::System::Object
{
public:
	::Class_1_D10B9F60C69ABAA3* __4__this; // 0x10
	::System::Action* onPingsFinished; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* dct; // 0x28
	::RPG::Client::GlobalDispatchData* data; // 0x30
	::System::Int32 __1__state; // 0x38

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
