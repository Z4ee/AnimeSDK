#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_INVOKERESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B327280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InvokeResponseModel_TypeDefinitionIndex = 19829;

	class InvokeResponseModel : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::String* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INVOKERESPONSEMODEL__CTOR_OFFSET))(this);
		}
	};
}
