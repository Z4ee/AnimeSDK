#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY_GET_GETCONFIRMDIALOGTEXT_OFFSET UNITYSDK_OFFSET(0x1C0D9080)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1C0D9070)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D9090)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateRegionPolicy_TypeDefinitionIndex = 20032;

	class AgeGateRegionPolicy : public ::System::Object
	{
	public:
		::System::String* _Region_k__BackingField; // 0x10
		::System::Func_1<::System::String*>* _GetConfirmDialogText_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* strRegion, ::System::Func_1<::System::String*>* getConfirmDialogText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY__CTOR_OFFSET))(this, strRegion, getConfirmDialogText);
		}

		::System::String* get_Region()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY_GET_REGION_OFFSET))(this);
		}

		::System::Func_1<::System::String*>* get_GetConfirmDialogText()
		{
			return ((::System::Func_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICY_GET_GETCONFIRMDIALOGTEXT_OFFSET))(this);
		}
	};
}
