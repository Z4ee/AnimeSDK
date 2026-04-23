#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }

#define MIHOYO_SDK_PAYHELPER_SUPPORTARBITRAYPARAMINCREATEORDER_OFFSET UNITYSDK_OFFSET(0x175FBEB0)
#define MIHOYO_SDK_PAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x175FC1A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayHelper_TypeDefinitionIndex = 7064;

	class PayHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void SupportArbitrayParamInCreateOrder(::MiHoYo::SDK::JSONObject*& model, ::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*&, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYHELPER_SUPPORTARBITRAYPARAMINCREATEORDER_OFFSET))(model, payInfo);
		}
	};
}
