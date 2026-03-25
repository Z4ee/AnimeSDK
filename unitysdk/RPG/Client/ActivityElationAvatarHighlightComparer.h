#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8EFFF10)
#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x8EFFE70)
#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFFE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationAvatarHighlightComparer_TypeDefinitionIndex = 49900;

	class ActivityElationAvatarHighlightComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* _modifiedAvatarDataList; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* modifiedAvatarDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, modifiedAvatarDataList);
		}

		::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* a, ::RPG::Client::IAvatarInfoProvider* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET))(this, a, b);
		}

		::System::Boolean IsModifiedAvatar(::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET))(this, avatarData);
		}
	};
}
