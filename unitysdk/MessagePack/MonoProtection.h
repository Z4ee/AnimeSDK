#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MESSAGEPACK_MONOPROTECTION_ENTERREFEMITLOCK_OFFSET UNITYSDK_OFFSET(0x17381980)
#define MESSAGEPACK_MONOPROTECTION_GET_ISRUNNINGONMONO_OFFSET UNITYSDK_OFFSET(0x17381920)
#define MESSAGEPACK_MONOPROTECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17381AE0)

namespace MessagePack
{
	inline static constexpr unsigned int MonoProtection_TypeDefinitionIndex = 9284;

	struct alignas(1) MonoProtection
	{
		static ::System::Object** StaticGet_RefEmitLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoProtection_TypeDefinitionIndex)->GetStaticField(0x450B0);
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
