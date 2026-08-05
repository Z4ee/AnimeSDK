#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MESSAGEPACK_MONOPROTECTION_ENTERREFEMITLOCK_OFFSET UNITYSDK_OFFSET(0x1DAE19A0)
#define MESSAGEPACK_MONOPROTECTION_GET_ISRUNNINGONMONO_OFFSET UNITYSDK_OFFSET(0x1DAE18F0)
#define MESSAGEPACK_MONOPROTECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1B10)

namespace MessagePack
{
	inline static constexpr unsigned int MonoProtection_TypeDefinitionIndex = 30026;

	struct alignas(1) MonoProtection
	{
		static ::System::Object** StaticGet_RefEmitLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoProtection_TypeDefinitionIndex)->GetStaticField(0x25300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsRunningOnMono()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION_GET_ISRUNNINGONMONO_OFFSET))();
		}

		/*
		static ::MessagePack::MonoProtectionDisposal EnterRefEmitLock()
		{
			return ((::MessagePack::MonoProtectionDisposal(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION_ENTERREFEMITLOCK_OFFSET))();
		}
		*/
	};
}
