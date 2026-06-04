#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_2FDE33CCAE591AA8;
namespace RPG::Client { class DirectDeliveryNoticeToastData; }
namespace RPG::Client::DirectDeliveryNotice { class ActivityAvatarInfoViewModel; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F2EE0)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastViewModel_TypeDefinitionIndex = 73902;

	class DirectDeliveryAvatarRewardToastViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoViewModel* AvatarInfo; // 0x18
		::Class_1_2FDE33CCAE591AA8* OnBtnCollectClick; // 0x20

		::System::Void _ctor(::RPG::Client::DirectDeliveryNoticeToastData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
