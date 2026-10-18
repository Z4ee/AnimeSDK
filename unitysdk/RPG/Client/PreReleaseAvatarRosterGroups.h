#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PRERELEASEAVATARROSTERGROUPS__CTOR_OFFSET UNITYSDK_OFFSET(0xDC090B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseAvatarRosterGroups_TypeDefinitionIndex = 66719;

	class PreReleaseAvatarRosterGroups : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Advertising; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* NotPossessing; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Possessing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARROSTERGROUPS__CTOR_OFFSET))(this);
		}
	};
}
