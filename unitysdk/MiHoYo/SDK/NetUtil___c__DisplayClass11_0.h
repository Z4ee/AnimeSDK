#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17582F60)
#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS11_0__HTTPPOSTJSON_B__0_OFFSET UNITYSDK_OFFSET(0x17584440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c__DisplayClass11_0_TypeDefinitionIndex = 7227;

	class NetUtil___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* bodyRaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpPostJson_b__0(::System::String* targetUrl)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS11_0__HTTPPOSTJSON_B__0_OFFSET))(this, targetUrl);
		}
	};
}
