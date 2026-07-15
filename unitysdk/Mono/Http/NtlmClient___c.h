#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Http { class NtlmSession; }
namespace System::Net { class HttpWebRequest; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }

#define MONO_HTTP_NTLMCLIENT___C__AUTHENTICATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A83B230)
#define MONO_HTTP_NTLMCLIENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A83B1E0)
#define MONO_HTTP_NTLMCLIENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83B220)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmClient___c_TypeDefinitionIndex = 2447;

	class NtlmClient___c : public ::System::Object
	{
	public:
		static ::Mono::Http::NtlmClient___c** StaticGet___9()
		{
			return (::Mono::Http::NtlmClient___c**)Il2CppClass::FromTypeDefinitionIndex(NtlmClient___c_TypeDefinitionIndex)->GetStaticField(0x294C0);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>** StaticGet___9__1_0()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>**)Il2CppClass::FromTypeDefinitionIndex(NtlmClient___c_TypeDefinitionIndex)->GetStaticField(0x294C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C__CTOR_OFFSET))(this);
		}

		::Mono::Http::NtlmSession* _Authenticate_b__1_0(::System::Net::HttpWebRequest* a1)
		{
			return ((::Mono::Http::NtlmSession*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C__AUTHENTICATE_B__1_0_OFFSET))(this, a1);
		}
	};
}
