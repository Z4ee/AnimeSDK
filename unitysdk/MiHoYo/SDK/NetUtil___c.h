#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63AEC0)
#define MIHOYO_SDK_NETUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63AEF0)
#define MIHOYO_SDK_NETUTIL___C__HTTPGET_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A63AF10)
#define MIHOYO_SDK_NETUTIL___C__HTTPGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A63AF00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c_TypeDefinitionIndex = 8144;

	class NetUtil___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>**)Il2CppClass::FromTypeDefinitionIndex(NetUtil___c_TypeDefinitionIndex)->GetStaticField(0x175F0);
		}
		static ::MiHoYo::SDK::NetUtil___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::NetUtil___c**)Il2CppClass::FromTypeDefinitionIndex(NetUtil___c_TypeDefinitionIndex)->GetStaticField(0x175F8);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Networking::UnityWebRequest*>**)Il2CppClass::FromTypeDefinitionIndex(NetUtil___c_TypeDefinitionIndex)->GetStaticField(0x17600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpGet_b__9_0(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__HTTPGET_B__9_0_OFFSET))(this, a1);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpGet_b__10_0(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__HTTPGET_B__10_0_OFFSET))(this, a1);
		}
	};
}
