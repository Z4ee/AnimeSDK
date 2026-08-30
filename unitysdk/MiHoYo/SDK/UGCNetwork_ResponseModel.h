#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCNETWORK_RESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C53E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork_ResponseModel_TypeDefinitionIndex = 46911;

	class UGCNetwork_ResponseModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x10
		::System::Int32 retcode; // 0x18
		::System::String* message; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_RESPONSEMODEL__CTOR_OFFSET))(this);
		}
	};
}
