#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityElationAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET UNITYSDK_OFFSET(0x1AD3B250)
#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x1AD3B1B0)
#define RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3B140)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationAvatarHighlightComparer_TypeDefinitionIndex = 61599;

	class ActivityElationAvatarHighlightComparer : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* _modifiedAvatarDataList; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsModifiedAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET))(this, a1);
		}
	};
}
