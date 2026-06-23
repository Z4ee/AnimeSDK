#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__AUTHENTICATEASCLIENTASYNC_B__79_0_OFFSET UNITYSDK_OFFSET(0x1C1BAB00)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__AUTHENTICATEASSERVERASYNC_B__81_0_OFFSET UNITYSDK_OFFSET(0x1C1BABB0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1BAAB0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BAAF0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int LegacySslStream___c_TypeDefinitionIndex = 2646;

	class LegacySslStream___c : public ::System::Object
	{
	public:
		static ::Mono::Net::Security::Private::LegacySslStream___c** StaticGet___9()
		{
			return (::Mono::Net::Security::Private::LegacySslStream___c**)Il2CppClass::FromTypeDefinitionIndex(LegacySslStream___c_TypeDefinitionIndex)->GetStaticField(0x2D30);
		}
		static ::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__79_0()
		{
			return (::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(LegacySslStream___c_TypeDefinitionIndex)->GetStaticField(0x2D38);
		}
		static ::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__81_0()
		{
			return (::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(LegacySslStream___c_TypeDefinitionIndex)->GetStaticField(0x2D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__CTOR_OFFSET))(this);
		}

		::System::IAsyncResult* _AuthenticateAsClientAsync_b__79_0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__AUTHENTICATEASCLIENTASYNC_B__79_0_OFFSET))(this, callback, state);
		}

		::System::IAsyncResult* _AuthenticateAsServerAsync_b__81_0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__AUTHENTICATEASSERVERASYNC_B__81_0_OFFSET))(this, callback, state);
		}
	};
}
