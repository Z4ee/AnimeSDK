#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA89E20)
#define MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS4_0__HTTPGETBINARY_B__0_OFFSET UNITYSDK_OFFSET(0x1AA89E30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork___c__DisplayClass4_0_TypeDefinitionIndex = 35275;

	class UGCNetwork___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpGetBinary_b__0()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS4_0__HTTPGETBINARY_B__0_OFFSET))(this);
		}
	};
}
