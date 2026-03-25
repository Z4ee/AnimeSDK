#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_UIDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16020EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIDefine_TypeDefinitionIndex = 7207;

	class UIDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 AccountCharacterLimitNum = 0x32; // 0x0
		// static const ::System::Int32 PasswordCharacterLimitNum = 0x32; // 0x0
		// static const ::System::Int32 PhoneCharacterLimitNum = 0xB; // 0x0
		// static const ::System::Int32 CodeCharacterLimitNum = 0x6; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIDEFINE__CTOR_OFFSET))(this);
		}
	};
}
