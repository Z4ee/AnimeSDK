#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE843D0)
#define QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE847E0)
#define QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE82ED0)

namespace QWER
{
	inline static constexpr unsigned int CAppConfigHelper__ReadFileAsync_d__1_TypeDefinitionIndex = 85836;

	class CAppConfigHelper__ReadFileAsync_d__1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* __s__2; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::Byte>*> __t__builder; // 0x18
		::System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppArray<::System::Byte>*> __u__1; // 0x30
		::System::Uri* _oUri_5__1; // 0x38
		::System::String* strUrl; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READFILEASYNC_D__1_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
