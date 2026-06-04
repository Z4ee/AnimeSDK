#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading { class ReaderWriterLockSlim; }

#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHREADLOCK_OFFSET UNITYSDK_OFFSET(0xA202F70)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0xA215FC0)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHWRITELOCK_OFFSET UNITYSDK_OFFSET(0xA203E40)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA20F2A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ReadWriteLock_TypeDefinitionIndex = 43821;

	class SecurityTunnel_ReadWriteLock : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterLockSlim* locker; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK__CTOR_OFFSET))(this, a1);
		}

		::System::Void WithReadLock(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHREADLOCK_OFFSET))(this, a1);
		}

		::System::Void WithUpgradeableReadLock(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHUPGRADEABLEREADLOCK_OFFSET))(this, a1);
		}

		::System::Void WithWriteLock(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHWRITELOCK_OFFSET))(this, a1);
		}
	};
}
