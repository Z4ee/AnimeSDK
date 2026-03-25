#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager_MarketingProtocolModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER_AGREEMENTINFOSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCD680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_AgreementInfosModel_TypeDefinitionIndex = 7035;

	class ProtocolManager_AgreementInfosModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel*>* marketing_agreements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_AGREEMENTINFOSMODEL__CTOR_OFFSET))(this);
		}
	};
}
