#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CThreadGroup; }
namespace QWER { template <typename T> class CMPMCQueue_1; }
namespace QWER { template <typename T> class CMPSCQueue_1; }
namespace System { class Action; }

#define QWER_CTHREADGROUP_CPOLLINRUNNER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BE88500)
#define QWER_CTHREADGROUP_CPOLLINRUNNER_POLL_OFFSET UNITYSDK_OFFSET(0x1BE88840)
#define QWER_CTHREADGROUP_CPOLLINRUNNER_POST_OFFSET UNITYSDK_OFFSET(0x1BE8B910)
#define QWER_CTHREADGROUP_CPOLLINRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8B760)

namespace QWER
{
	inline static constexpr unsigned int CThreadGroup_CPollInRunner_TypeDefinitionIndex = 85876;

	class CThreadGroup_CPollInRunner : public ::System::Object
	{
	public:
		::QWER::CThreadGroup* m_oOwner; // 0x10
		::QWER::CMPMCQueue_1<::System::Action*>* m_oMPMCQueue; // 0x18
		::QWER::CMPSCQueue_1<::System::Action*>* m_oMPSCQueue; // 0x20
		::System::Boolean m_bIsEmpty; // 0x28

		::System::Void _ctor(::System::Boolean bUsingMPMC, ::QWER::CThreadGroup* oOwner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::QWER::CThreadGroup*))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_CPOLLINRUNNER__CTOR_OFFSET))(this, bUsingMPMC, oOwner);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_CPOLLINRUNNER_ISEMPTY_OFFSET))(this);
		}

		::System::Void Poll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_CPOLLINRUNNER_POLL_OFFSET))(this);
		}

		::System::Void Post(::System::Action* oAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_CPOLLINRUNNER_POST_OFFSET))(this, oAction);
		}
	};
}
