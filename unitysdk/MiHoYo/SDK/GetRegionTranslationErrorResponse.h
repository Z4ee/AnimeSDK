#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_GETREGIONTRANSLATIONERRORRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x199976A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GetRegionTranslationErrorResponse_TypeDefinitionIndex = 18821;

	class GetRegionTranslationErrorResponse : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GETREGIONTRANSLATIONERRORRESPONSE__CTOR_OFFSET))(this);
		}
	};
}
