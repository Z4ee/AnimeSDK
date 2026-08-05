#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKRESPONSEMODELEX_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x1CE097E0)
#define MIHOYO_SDK_NETWORKRESPONSEMODELEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE09AB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkResponseModelEx_TypeDefinitionIndex = 20288;

	class NetworkResponseModelEx : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x20
		::MiHoYo::SDK::JSONNode* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODELEX__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* ToJSONObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODELEX_TOJSONOBJECT_OFFSET))(this);
		}
	};
}
