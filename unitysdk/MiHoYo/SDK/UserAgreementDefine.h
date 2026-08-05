#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_USERAGREEMENTDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE1B20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserAgreementDefine_TypeDefinitionIndex = 19686;

	class UserAgreementDefine : public ::System::Object
	{
	public:
		// static const ::System::String* ENV; // 0x0
		// static const ::System::String* LANGUAGE; // 0x0
		// static const ::System::String* GAME_BIZ; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_USERAGREEMENTDEFINE__CTOR_OFFSET))(this);
		}
	};
}
