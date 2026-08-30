#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISDESCENDING_OFFSET UNITYSDK_OFFSET(0x193BCCC0)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x193BCC00)
#define RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETPINNING_OFFSET UNITYSDK_OFFSET(0x193BCB40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerExtensions_TypeDefinitionIndex = 62871;

	class AvatarComparerExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetPinning(::RPG::Client::IAvatarComparer* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETPINNING_OFFSET))(a1, a2);
		}

		static ::System::Void SetLevelRarityIsLevelFirst(::RPG::Client::IAvatarComparer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISLEVELFIRST_OFFSET))(a1, a2);
		}

		static ::System::Void SetLevelRarityIsDescending(::RPG::Client::IAvatarComparer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::IAvatarComparer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPAREREXTENSIONS_SETLEVELRARITYISDESCENDING_OFFSET))(a1, a2);
		}
	};
}
