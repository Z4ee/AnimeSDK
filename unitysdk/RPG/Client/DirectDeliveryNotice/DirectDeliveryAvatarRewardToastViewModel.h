#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace RPG::Client { class DirectDeliveryNoticeToastData; }
namespace RPG::Client::DirectDeliveryNotice { class ActivityAvatarInfoViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A004B80)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastViewModel_TypeDefinitionIndex = 76284;

	class DirectDeliveryAvatarRewardToastViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Sofa::Core::SimpleCommand* OnBtnCollectClick; // 0x18
		::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoViewModel* AvatarInfo; // 0x20

		::System::Void _ctor(::RPG::Client::DirectDeliveryNoticeToastData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
