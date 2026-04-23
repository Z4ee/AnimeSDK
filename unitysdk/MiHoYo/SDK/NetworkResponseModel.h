#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_NETWORKRESPONSEMODEL_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x175917E0)
#define MIHOYO_SDK_NETWORKRESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1758C8F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkResponseModel_TypeDefinitionIndex = 7216;

	class NetworkResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18
		::MiHoYo::SDK::JSONNode* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODEL__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* ToJSONObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODEL_TOJSONOBJECT_OFFSET))(this);
		}
	};
}
