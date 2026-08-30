#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4CA50)
#define MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS5_0__HTTPPOSTBINARY_B__0_OFFSET UNITYSDK_OFFSET(0x1CD4CBE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork___c__DisplayClass5_0_TypeDefinitionIndex = 46914;

	class UGCNetwork___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* strContentType; // 0x10
		::System::String* url; // 0x18
		::Il2CppArray<::System::Byte>* bodyRaw; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* _HttpPostBinary_b__0()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__DISPLAYCLASS5_0__HTTPPOSTBINARY_B__0_OFFSET))(this);
		}
	};
}
