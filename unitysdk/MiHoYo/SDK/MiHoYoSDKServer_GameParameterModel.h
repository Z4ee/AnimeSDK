#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_GAMEPARAMETERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x194A51E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_GameParameterModel_TypeDefinitionIndex = 46778;

	class MiHoYoSDKServer_GameParameterModel : public ::System::Object
	{
	public:
		::System::String* game; // 0x10
		::System::String* gameBiz; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_GAMEPARAMETERMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
