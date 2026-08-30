#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICETOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7D660)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeToastData_TypeDefinitionIndex = 63645;

	class DirectDeliveryNoticeToastData : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeData* Notice; // 0x10
		::System::Boolean IsLoginToast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICETOASTDATA__CTOR_OFFSET))(this);
		}
	};
}
