#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class WWWForm; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7EED0)
#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS14_0__HTTPPOSTFORM_B__0_OFFSET UNITYSDK_OFFSET(0x19C7EEE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c__DisplayClass14_0_TypeDefinitionIndex = 19056;

	class NetUtil___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::UnityEngine::WWWForm* form; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpPostForm_b__0(::System::String* targetUrl)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS14_0__HTTPPOSTFORM_B__0_OFFSET))(this, targetUrl);
		}
	};
}
