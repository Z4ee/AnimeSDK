#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CF835A0D0D90B72;
namespace RPG::Client { class BattleLogModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10AE4110)
#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10AE4760)
#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10AE47C0)
#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10AE4770)
#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AE4100)
#define CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE3C70)

inline static constexpr unsigned int Class_1_1CF835A0D0D90B72__SendUploadRequest_d__8_TypeDefinitionIndex = 49424;

class Class_1_1CF835A0D0D90B72__SendUploadRequest_d__8 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* reportingList; // 0x18
	::Class_1_1CF835A0D0D90B72* __4__this; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
