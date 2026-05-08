#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/SSendOrPoostCallbackInfo.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"

namespace QWER { class CFutex; }
namespace QWER { template <typename T> class CMPSCQueue_1; }
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define QWER_CMPSCSYNCHRONIZATIONCONTEXT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BE87E00)
#define QWER_CMPSCSYNCHRONIZATIONCONTEXT_GET_FUTEX_OFFSET UNITYSDK_OFFSET(0x1BE87E20)
#define QWER_CMPSCSYNCHRONIZATIONCONTEXT_POLL_OFFSET UNITYSDK_OFFSET(0x1BE87FA0)
#define QWER_CMPSCSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1BE87E30)
#define QWER_CMPSCSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE85920)

namespace QWER
{
	inline static constexpr unsigned int CMPSCSynchronizationContext_TypeDefinitionIndex = 85850;

	class CMPSCSynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		::QWER::CFutex* m_oFutex; // 0x18
		::QWER::CMPSCQueue_1<::QWER::SSendOrPoostCallbackInfo>* m_oQueue; // 0x20

		::System::Void _ctor(::QWER::CFutex* oFutex)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CFutex*))((::PBYTE)hIl2Cpp + QWER_CMPSCSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this, oFutex);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CMPSCSYNCHRONIZATIONCONTEXT_GET_COUNT_OFFSET))(this);
		}

		::QWER::CFutex* get_Futex()
		{
			return ((::QWER::CFutex*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CMPSCSYNCHRONIZATIONCONTEXT_GET_FUTEX_OFFSET))(this);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_CMPSCSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, d, state);
		}

		::System::Int32 Poll(::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CMPSCSYNCHRONIZATIONCONTEXT_POLL_OFFSET))(this, dwMaxCount);
		}
	};
}
