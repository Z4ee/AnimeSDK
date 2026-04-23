#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_UGCINTERFACE_UGCRESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD5E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_UgcResponseModel_TypeDefinitionIndex = 43040;

	class UGCInterface_UgcResponseModel : public ::System::Object
	{
	public:
		::System::String* task_id; // 0x10
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UGCRESPONSEMODEL__CTOR_OFFSET))(this);
		}
	};
}
