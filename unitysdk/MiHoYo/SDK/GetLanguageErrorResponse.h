#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_GETLANGUAGEERRORRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95E350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GetLanguageErrorResponse_TypeDefinitionIndex = 19832;

	class GetLanguageErrorResponse : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GETLANGUAGEERRORRESPONSE__CTOR_OFFSET))(this);
		}
	};
}
